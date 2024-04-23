<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Configurando um Banco de Dados</h1>
</header>
<main>
  <section>
    <h2>Timestream Data Base</h2>
    <article>
      <h3>Passo 01</h3>
      <p>
       Pesquise por <strong>"Timestream"</strong> e selecione como demonstrado na figura abaixo.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_1.png">
        </figure>
        <br>Nesta nova aba, selecione <strong>"Recursos">"Banco de dados"</strong>, como demonstrado na figura a seguir.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_2.png">
        </figure>
        <br>Clique em <strong>"Criar banco de dados"</strong> e nomeie seu banco de dados<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_3.png">
        </figure>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_4.png">
        </figure>
      </p>
    </article>
    <article>
      <h3>Passo 02</h3>
      <p>
       <br>Com o banco de dados criado, acesse-o e selecione a aba <strong>"Tablelas">"Criar tabela"</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_5.png">
        </figure> 
       Nesta nova aba, dê um nome para sua tabela e selecione <strong>"Partcionamento personalizado">"Nome da medida" e não selecione "Impor chave de partição no registro"</strong><br>
        <br>Como demonstrado a seguir:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_6.png">
        </figure>
        <br>Por fim, em <strong>"Retenção de dados"</strong> deixe como na seguinte imagem e desselecione <strong>"habilitar gravações de armazenamento magnético</strong> e crie a tabela.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_7.png">
        </figure>
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora vamos voltar ao <strong>"IoT CORE"</strong>, para criar uma regra, entre os dados recebidos e o banco de dados<br> 
        Selecione <strong>"Gerenciar" > "Roteamento de mensagens" > "Regras"</strong>, e cole o tópico de publicação. Neste caso, utilizarei o tópico <strong> esp32/sub </strong>, para demonstrar que a conexão está ativa. <br>
        Como na figura abaixo:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_8.png">
        </figure>
        <br>Nomeie a regra como preferir e  clique em <strong> "Próxima"</strong> 
        <br> Na <strong>"Instrução SQL"</strong> substituiremos o <strong>"ATRIBUTE" por "*" </strong> e como tópico colocaremos o tópico de publicação do esp, ou seja, <strong>"esp32/pub"</strong>, apagando o restante.<br>
        <br>Como na imagem a seguir:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_9.png">
        </figure>
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora para defineremos as ações, o que acontece com os dados.
        <br> Em <strong>"Ação 1"</strong> selecione <strong>"Timestream table"</strong>.
        <br>Selecione em seguida o banco de dados criado anteriormente junto com a respectiva tabela.
        <br><strong> Em dimensões, é possível adicionar colunas de sua preferencia e o valor delas.<br> Para fechar o portão, envie "0"</strong>.<br>
        <strong> O monitor serial deve ajuda-lo a entender o que está acontecendo, ele é seu melhor amigo </strong> <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_5.png">
        </figure><br>
     Com isso nosso ESP 32 está pareado com a AWS via MQTT e TLS e agora responde a nossas mensagens.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href=""><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>
