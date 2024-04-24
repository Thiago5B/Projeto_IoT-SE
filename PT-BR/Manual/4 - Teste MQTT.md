
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
        <br>Voltemos a  <strong> Arduino IDE</strong> e selecionemos o <strong>monitor serial</strong>. <br>
        <br> É possível observar a mensagem publicada, como na imagem a seguir:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_4.png">
        </figure>
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora para realizar o acionamento, do portão, basta trocar o tópico de publicação para <strong>led/sub</strong>.
        <br><strong> Para abrir o portão, apague todo o payload e envie "1".<br> Para fechar o portão, envie "0"</strong>.<br>
        <strong> O monitor serial deve ajuda-lo a entender o que está acontecendo, ele é seu melhor amigo </strong> <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_5.png">
        </figure><br>
     Com isso nosso ESP 32 está pareado com a AWS via MQTT e TLS e agora responde a nossas mensagens.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/5%20-%20Configurar%20Timestream.md"><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>
