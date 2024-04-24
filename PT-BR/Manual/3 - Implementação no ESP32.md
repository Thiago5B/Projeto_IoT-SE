
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
    <h2>Implementação</h2>
    <article>
      <h3>Passo 01</h3>
      <p>
        Acesse e realize o download dos arquivos <strong><a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/Main.ino">"Main.ino"</a> e <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/secrets.h">"secrets.h"</a></strong>.<br>
        Garanta que você selecionou a placa ESP 32 e a porta, na plataforma <strong>"Arduino IDE" </strong>. Em caso de dúvida <a href="https://www.youtube.com/watch?v=ROkhP5oWRUU"> clique aqui para aprender a configurar a <strong>Arduino IDE</strong> para o ESP 32</a> <br>
      </p>
    </article>
    <article>
      <h3>Passo 02</h3>
      <p>
       <strong>Vamos editar o código de maneira a adequa-lo a sua conta AWS e sua "coisa".</strong> <br>
        Para isso, já na <strong>"Arduino IDE"</strong> clique em <strong>"secrets.h"</strong>. 
        <br> Vamos alterar primeiramente a rede wifi a ser utilizada pelo nosso ESP 32<br>
        Para tal substitua <strong>5BOLA-FUNDO </strong> pelo nome da sua rede wifi. E também <strong>5bola2008_</strong> pela senha da sua rede wifi, como na figura a seguir.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_1.png">
        </figure>        
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora vamos, por fim, indexar nossa "coisa" e nossa conta AWS ao nosso ESP-32<br> 
        Ainda no IoT Core, no site da AWS, acesse <strong>"Gerenciar"> "Coisas"</strong>, e copie o nome da "coisa" que foi criada anteriormente. Cole este nome no lugar de <strong> Coisa-Teste </strong>. <br>
        Como na figura abaixo:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/esp_2.png">
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
    <h3>Siga para o arquivo <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/4%20-%20Teste%20MQTT.md"><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>


