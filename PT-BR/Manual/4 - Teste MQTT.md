
<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Testando a conexão</h1>
</header>
<main>
  <section>
    <h2>MQTT IoT CORE</h2>
    <article>
      <h3>Passo 01</h3>
      <p>
       Abra o código na Arduino IDE e copie <strong>o tópico de publicação das mensagens</strong> e selecione como demonstrado na figura abaixo.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
        <br>Neste caso, nosso tópico de inscrição é <strong>esp32/pub</strong>, pois o esp publica essa mensagem, cabo ao AWS se inscrever nela.
        <br>Acesse novamente o <strong>"IoT CORE"</strong> e selecione <strong> "Testar"> "Cliente MQTT"</strong>.<br>
        Garanta que a placa ESP 32 esteja ligada e com o LED vermelho acesso.<br>
      </p>
    </article>
    <article>
      <h3>Passo 02</h3>
      <p>
       <strong>Cole o nome do tópico na aba "Assinar um tópico" e clique em "Inscrever-se".</strong> <br>
        Se tudo estiver correto, as mensagens deste tópico aparecerão logo abaixo<br>
        <br>Como demonstrado a seguir:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_2.png">
        </figure>        
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora vamos, enviar informações para o ESP, por meio de MQTT<br> 
        Ainda na mesma aba, selecione <strong>"Publicar um tópico"</strong>, e cole o tópico de publicação. Neste caso, utilizarei o tópico <strong> esp32/sub </strong>, para demonstrar que a conexão está ativa. <br>
        Como na figura abaixo:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_3.png">
        </figure>
        <br>Além disso, iremos precisar do <strong> End Point do AWS</strong> <br>
        <br> Para encontra-lo basta selecionar <strong>"Iot Core">"Configurações"</strong> e copie o <strong> "End Point" </strong><br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_3.png">
        </figure>
        <br>Cole no end point, como demonstrado na figura:<br>
         <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_4.png">
        </figure>
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora vamos pegar os certificados baixados e adiciona-los ao código.
        <br><strong> Abra o local de Dowload dos certificados e abra com um leitor de texto desejado</strong><br>
        <strong> Cole em como mostrado na figura a baixo, repita para os demais certificados, mantendo a seguinte ordem: </strong> <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_5.png">
        </figure>
        <strong>1- Amazon Root CA 1</strong><br>
        <strong>2- Certificado do dispositivo</strong><br>
        <strong>3- Chave privada do dispositivo</strong><br>
     Com isso nosso ESP 32 está pareado com a AWS via MQTT e TLS.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href=""><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>
