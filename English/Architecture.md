
<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Architecture</h1>
</header>
<main>
  <section>
    <h2>General overview</h2>
    <article>
      <p>
        This project was developed using an ESP 32, the AWS cloud service and the Grafana dashboard, such as seen on the flowchart below.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/Arquitetura.png">
        </figure>
    <h2>Understanding the Architecture</h2>
         <h3>Data acquiring</h3>
        The data acquiring is made using the ESP 32, connected to a ultrassonic distance sensor, the HC SR04, and a LED. While the real variable related to the sensor is received by the microcontroller
        , since the sensor returns a voltage value proportional to it's scale, the LED bool variable is sent by the micro, because it is possible to control the LED state using it, being <strong>1 = ON and 0 = OFF </strong><br>
      </p>
    </article>
    <article>
      <h3>Data communication</h3>
      <p>
        Once the data is acquired, it is sent through the MQTT protocol to the cloud. However, data security is done through the TLS protocol, which basically consists of data processing in the form of encryption, where only the two ends of a connection have the security key. This allows establishing a private and reliable connection between two network addresses.<br><br>
        Thus, an MQTT connection is established between the ESP32 and the cloud, the AWS IoT Core, allowing the sending of signals between the two through topics. However, the two variables used (Sensor reading and LED control) have inverted logic with respect to communication, since:
<br><br>
        - LED: ESP32 -> subscribe -> AWS and then AWS -> publish -> ESP32<br>
             <strong>Meaning the LED is controlled by a message sent from the Cloud</strong><br>
        - HC SR04: AWS -> subscribe -> ESP32 and then ESP32 -> publish -> AWS<br>
             <strong>Meaning the distance measured by the sensor is being sent to the AWS IoT Cloud</strong>
        <br><br>
        Translation:
With the communication established, the data is then sent to Amazon Timestream, a database service from Amazon, to be stored, since communication protocols do not have the capacity to record transmitted values, sending them instantly and then deleting them as soon as new data is published.
      </p>
      <h3>Data visualization</h3>
      <p>
        With the data established in the database, it is then possible to visualize it through a dashboard service, which, in this case, will be Grafana. It was chosen not only for its simplicity and free use but also because, in addition to being open-source, it has integrated communication with Amazon Timestream, being necessary only to configure the plugin referring to this database in its library.<br><br>
        With the plugin configured, it will automatically inform you about your already created databases and thus it is possible to use the stored values to make a visualization in the form of a line graph, representing the changes over time.<br><br>
        Unfortunately, LED control cannot be done directly in Grafana, as it only communicates with the database
        and it doesn't make sense to store values of 0 or 1. But using the AWS IoT Core, you just need to publish the desired state to the corresponding topic, and it will be controlled.
      </p>
    </article>
  </section>
</main>
</body>
</html>
