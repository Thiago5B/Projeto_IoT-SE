
<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>ESP32</h1>
</header>
<main>
  <section>
    <h2>Implementing</h2>
    <article>
      <h3>Step 01</h3>
      <p>
        Access and download the  <strong><a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/Main.ino">"Main.ino"</a> and <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/secrets.h">"secrets.h"</a></strong> files.
        Make sure you have chosen the ESP 32 board and port, on the <strong>"Arduino IDE"</strong>. In case of doubt <a href="https://www.youtube.com/watch?v=ROkhP5oWRUU"> click here to lern how to configure the <strong>Arduino IDE</strong> for the ESP 32 </a>. <br>
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       <strong>Let edit the code in order to adapt it to your AWS account and your "thing".</strong> <br>
        To do this, when already on the <strong>"Arduino IDE"</strong>, click on <strong>"secrets.h"</strong>.
        <br>Lets first change the wifi network to be used by the microcontroller.<br>
        To do so, substitute <strong>5BOLA-FUNDO </strong> for your wifi network name and also <strong>5bola2008_</strong> for your wifi network password, such as seen on the picture below.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_1.png">
        </figure>        
      </p>
      <h3>Step 03</h3>
      <p>
        Now, let's finally index our "thing" and our AWS account to our ESP-32<br> 
        Still in IoT Core, on the AWS Website, access <strong>"Manage">"Things"</strong>, and copy the name of the "thing" that was created before. Paste this name in place of <strong> Coisa-Teste </strong> <br>
        As seen on the picture below
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_2.png">
        </figure>
        <br>Besides that, we need the <strong>AWS End Point</strong> <br>
        <br> To find it, just select <strong>"Iot Core">"Settings"</strong> and copy the <strong>"End Point"</strong><br>.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_3.png">
        </figure>
        <br>Paste it on the end point, as seen on the picture:<br>
         <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_4.png">
        </figure>
      </p>
      <h3>Step 04</h3>
      <p>
        Now let's add the donwloaded certificates into the code.
        <br><strong>Open the downloaded certificates file and open a text reader app of your choice</strong><br>
        <strong> Paste as shown on the picture below and repete for the remaining certificates, mantaining the following order: </strong> <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_5.png">
        </figure>
        <strong>1- Amazon Root CA 1</strong><br>
        <strong>2- Device certificate</strong><br>
        <strong>3- Device private key</strong><br>
     With that, our ESP 32 is already connected to the AWS by MQTT and TLS.        
      </p>
    </article>
    <h3>Jump to the <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/English/Manual/4%20-%20MQTT%20Test.md"><strong>next section</a></strong> of the manual</h3>
  </section>
</main>
</body>
</html>
