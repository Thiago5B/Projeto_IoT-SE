
<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Arquitetura</h1>
</header>
<main>
  <section>
    <h2>Visão Geral</h2>
    <article>
      <p>
       Esse projeto foi desenvolvido utilizando um ESP32, o serviço de nuvem AWS e o Grafana como dashboard, como pode ser visto no fluxograma abaixo.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/Arquitetura.png">
        </figure>
    <h2>Entendendo a arquitetura</h2>
         <h3>Aquisição de dados</h3>
        A aquisição de dados é feita através de um ESP32, conectado à um sensor ultrassônico de distância, um HC SR04, e à um LED. Enquanto a variável real relacionada ao sensor é recebida pelo microcontrolador, uma vez que o sensor retorna um valor de tensão proporcional à sua escala, a variável booleana do LED é escrita pelo micro, pois através dela é possível controlar o estado do LED, sendo <strong>1 = ON e 0 = OFF </strong><br>
      </p>
    </article>
    <article>
      <h3>Comunicação dos dados</h3>
      <p>
       Uma vez adquiridos os dados, seu envio é feito através do protocolo MQTT até a nuvem, porém a segurança dos dados é feita através do protocolo TLS, que, basicamente, consiste em um tratamento de dados na forma de criptografia, onde apenas as duas pontas de uma conexão possuem a chave de segurança. Isso permite estabelecer uma conexão privada e confiável entre dois endereços da rede.<br><br>
        Assim, estabelece-se uma conexão MQTT entre o ESP32 e a nuvem, o AWS IoT Core, pertmitindo o envio de sinais entre os dois através dos topics, porém as duas variáveis utilizadas (Leitura do sensor e controle do LED), tem lógicas invertidas com relação à comunicação, uma vez que:<br><br>
        - LED: ESP32 -> subscribe -> AWS e então AWS -> publish -> ESP32<br>
             <strong>De forma que o LED seja controlado pelo comando vindo da nuvem</strong><br>
        - HC SR04: AWS -> subscribe -> ESP32 e então ESP32 -> publish -> AWS<br>
             <strong>Para que o AWS IoT Core possa receber a distância lida pelo sensor</strong>
        <br><br>
        Com a comunicação estabelecida, os dados são então enviados ao Amazon Timestream, um serviço de banco da dados da Amazon, para que sejam armazenados, uma vez que os protocolos de comunicação não tem capacidade de gravar os valores transmitidos, enviando-os instantâneamente e então deletando-os assim que um novo dado é publicado.
      </p>
      <h3>Visualização dos dados</h3>
      <p>
        Com os dados no banco de dados estabelecidos, é possível então fazer a visualização através de um serviço de dashboard, que, nesse caso, será o Grafana. Ele foi escolhido não só por sua simplicidade e uso gratuito, mas também porque, além de ser open-source, possui uma comunicação integrada com o Amazon Timestream, sendo necessário apenas configurar o plugin referente à esse banco de dados em sua biblioteca.<br><br>
        Com o plugin configurado, ele automáticamente irá informar quais são suas databases já criadas e assim é possível utilizar os valores armazenados para fazer uma visualização na forma de um gráfico de linha, representando as mudanças ao longo do tempo.<br><br>
        Infelizmente o controle do LED não é possível de ser feito diretamente no Grafana, já que ele apenas comunica com o banco de dados e não faz sentido armazenar valores de 0 ou 1, mas utilizando o AWS IoT Core, basta da publish no tópico correspondente com o estado desejado, que ele será controlado.
      </p>
    </article>
  </section>
</main>
</body>
</html>
