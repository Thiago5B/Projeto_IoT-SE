
#include <Ultrasonic.h>  //Carrega a biblioteca Ultrasonic
#include "secrets.h"      // Arquivo com as credenciais de Wi-Fi e do AWS IoT Core
#include <WiFiClientSecure.h>
#include <MQTTClient.h>
#include <ArduinoJson.h>
#include "WiFi.h"

// Os tópicos MQTT que este dispositivo deve publicar/assinar
#define AWS_IOT_PUBLISH_TOPIC "esp32/pub"    // Pub == Envia ao AWS
#define AWS_IOT_SUBSCRIBE_TOPIC "esp32/sub"  // Sub == Recebe do AWS
#define AWS_IOT_SUBSCRIBE_TOPIC_LED "led/sub"
#define AWS_IOT_SUBSCRIBE_TOPIC_ERROS "erros"

int led = 25;           // Pino do LED
bool led_status = HIGH; // Estado inicial do LED

// Motores
int pwmA = 21;
int in1A = 22;
int in2A = 23;

// Ultrassônico
long distancia = 0;
Ultrasonic ultrassom(4, 5);  // Define os pinos do sensor ultrassônico

WiFiClientSecure net = WiFiClientSecure();
MQTTClient client = MQTTClient(256);

// Função para conectar ao AWS IoT Core
void connectAWS() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);  // Conecta à rede Wi-Fi

  Serial.println("Connecting to Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Configura o WiFiClientSecure para usar as credenciais do dispositivo AWS IoT
  net.setCACert(AWS_CERT_CA);
  net.setCertificate(AWS_CERT_CRT);
  net.setPrivateKey(AWS_CERT_PRIVATE);

  // Conecta ao broker MQTT no endpoint do AWS IoT Core
  client.begin(AWS_IOT_ENDPOINT, 8883, net);

  // Define um manipulador de mensagens
  client.onMessage(messageHandler);

  Serial.print("Connecting to AWS IOT\n");

  while (!client.connect(THINGNAME)) {  // Tenta conectar-se ao AWS IoT Core
    Serial.print(".\t");
    delay(100);
  }

  if (!client.connected()) {
    Serial.println("AWS IoT Timeout!");
    return;
  }

  // Se conectado, assina os tópicos necessários
  client.subscribe(AWS_IOT_SUBSCRIBE_TOPIC);
  client.subscribe(AWS_IOT_SUBSCRIBE_TOPIC_LED);

  Serial.println("AWS IoT Connected!\n");
}

// Função para publicar uma mensagem
void publishMessage() {
  StaticJsonDocument<200> doc;
  doc["distancia"] = distancia;
  doc["led_status"] = digitalRead(led); // Lê o estado do LED
  char jsonBuffer[512];
  serializeJson(doc, jsonBuffer);  // Serializa a mensagem em formato JSON

  client.publish(AWS_IOT_PUBLISH_TOPIC, jsonBuffer); // Publica a mensagem
}

// Manipulador de mensagens recebidas
void messageHandler(String &topic, String &payload) {
  Serial.println("incoming: " + topic + " - " + payload);

  if (topic.equals("led/sub") == true) {  // Se a mensagem é para controlar o LED
    changeLedState(payload); // Altera o estado do LED
  }
}

// Função para alterar o estado do LED
int changeLedState(String payload) {
  Serial.println("Recebi a seguinte payload = " + payload);
  led_status = payload.toInt();
  digitalWrite(led, led_status);  // Controla o LED com base na mensagem recebida

  return 1;
}

// Função para testar o motor
void testMotor() {
  // Gira em uma direção
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  analogWrite(pwmA, 20);
  Serial.println("V1");
  delay(2000);
  analogWrite(pwmA, 100);
  Serial.println("V2");
  delay(2000);
  analogWrite(pwmA, 200);
  Serial.println("V3");
  delay(2000);
}

// Função para fechar o portão
void fechaPortao() {
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  do {
    Serial.println("Fechando portão..");
    analogWrite(pwmA, 200);
  } while (testHC() > 5); // Verifica a distância do sensor ultrassônico
  analogWrite(pwmA, 0);
}

// Função para abrir o portão
void abrePortao() {
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  do {
    Serial.println("Abrindo portão..");
    analogWrite(pwmA, 200);
  } while (testHC() < 10); // Verifica a distância do sensor ultrassônico
  analogWrite(pwmA, 0);
}

// Função para medir a distância com o sensor ultrassônico
float testHC() {
  distancia = ultrassom.read(CM); // Lê a distância
  Serial.print(distancia);  // Imprime o valor da distância
  Serial.println("cm");
  delay(100);

  return distancia;
}

void setup() {
  Serial.begin(9600);
  connectAWS(); // Conecta-se ao AWS IoT Core

  pinMode(led, OUTPUT);
  pinMode(pwmA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
}

void loop() {
  digitalWrite(led, led_status); // Define o estado do LED
  testHC(); // Mede a distância com o sensor ultrassônico
  publishMessage(); // Publica a mensagem com a distância
  client.loop();
  delay(1000);
}
