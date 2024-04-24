<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Testing the Connection</h1>
</header>
<main>
  <section>
    <h2>MQTT IoT CORE</h2>
    <article>
      <h3>Step 01</h3>
      <p>
       Open the code in Arduino IDE and copy the <strong>message publication topic</strong> and select as shown in the figure below.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
        <br>In this case, our subscription topic is <strong>esp32/pub</strong>, because the ESP publishes this message, and AWS subscribes to it.
        <br>Access the <strong>"IoT CORE"</strong> again and select  <strong>"Test"> "MQTT Client"</strong>.<br>
        Make sure the ESP 32 board is powered on and the red LED is on.<br>
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       <strong>Paste the topic name in the "Subscribe to a topic" tab and click "Subscribe"</strong>. <br>
        If everything is correct, the messages from this topic will appear below<br>
        <br>As demonstrated below:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_2.png">
        </figure>        
      </p>
      <h3>Step 03</h3>
      <p>
        Now let's send information to the ESP, through MQTT<br> 
        Still in the same tab, select <strong>"Publish to a topic"</strong>, and paste the publication topic. In this case, we will use the topic <strong> esp32/sub </strong>, to demonstrate that the connection is active. <br>
        As in the figure below:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_3.png">
        </figure>
        <br>Let's go back to  <strong> Arduino IDE</strong> and select the <strong>serial monitor</strong>. <br>
        <br> It is possible to observe the published message, as in the following image:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_4.png">
        </figure>
      </p>
      <h3>Step 04</h3>
      <p>
        Now to activate the gate, just change the publication topic to </strong>led/sub</strong>.
        <br><strong> To open the gate, erase all payload and send "1".<br> To close the gate, send "0"</strong>.<br>
        <strong> The serial monitor should help you understand what is happening, it is your best friend </strong> <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_5.png">
        </figure><br>
     With this, our ESP 32 is paired with AWS via MQTT and TLS and now responds to our messages.        
      </p>
    </article>
    <h3>Follow the <strong><a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/English/Manual/6%20-%20Timestream%20testing.md">link to the next section</strong></a> of the manual</h3> 
  </section>
</main>
</body>
</html>
