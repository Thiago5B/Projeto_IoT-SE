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
       Open the code in Arduino IDE and copy the **message publication topic** and select as shown in the figure below.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
        <br>In this case, our subscription topic is **esp32/pub**, because the ESP publishes this message, and AWS subscribes to it.
        <br>Access the **"IoT CORE"** again and select  **"Test"> "MQTT Client"**.<br>
        Make sure the ESP 32 board is powered on and the red LED is on.<br>
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       **Paste the topic name in the "Subscribe to a topic" tab and click "Subscribe"**. <br>
        If everything is correct, the messages from this topic will appear below<br>
        <br>As demonstrated below:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_2.png">
        </figure>        
      </p>
      <h3>Step 03</h3>
      <p>
        Now let's send information to the ESP, through MQTT<br> 
        Still in the same tab, select **"Publish to a topic"**, and paste the publication topic. In this case, we will use the topic ** esp32/sub **, to demonstrate that the connection is active. <br>
        As in the figure below:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_3.png">
        </figure>
        <br>Let's go back to  ** Arduino IDE** and select the **serial monitor**. <br>
        <br> It is possible to observe the published message, as in the following image:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_4.png">
        </figure>
      </p>
      <h3>Step 04</h3>
      <p>
        Now to activate the gate, just change the publication topic to **led/sub**.
        <br>** To open the gate, erase all payload and send "1".<br> To close the gate, send "0"**.<br>
        ** The serial monitor should help you understand what is happening, it is your best friend ** <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_5.png">
        </figure><br>
     With this, our ESP 32 is paired with AWS via MQTT and TLS and now responds to our messages.        
      </p>
    </article>
    <h3>Follow the **link to the next section** of the manual</h3> 
    <!-- I assumed you want a link here, please replace with the correct link -->
  </section>
</main>
</body>
</html>
