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
    <h2>Banco de Dados Timestream</h2>
    <article>
      <h3>Passo 01</h3>
      <p>
       Procure por <strong>"Timestream"</strong> e selecione-o como mostrado na figura abaixo.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_1.png">
        </figure>
        <br>Nesta nova aba, selecione <strong>"Recursos">"Bancos de Dados"</strong>, como mostrado na figura a seguir.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_2.png">
        </figure>
        <br>Clique em <strong>"Criar banco de dados"</strong> e dê um nome ao seu banco de dados<br>
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
       <br>Com o banco de dados criado, acesse-o e selecione a aba <strong>"Tabelas">"Criar tabela"</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_5.png">
        </figure> 
       <br>Nesta nova aba, dê um nome à sua tabela e selecione <strong>"Particionamento personalizado">"Nome da medida" e não selecione "Impor chave de partição no registro"</strong><br>
        <br>Como mostrado abaixo:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_6.png">
        </figure>
        <br>Por fim, em <strong>"Retenção de dados"</strong> deixe como na imagem a seguir e desmarque <strong>"habilitar gravações de armazenamento magnético"</strong> e crie a tabela.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_7.png">
        </figure>
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora vamos voltar ao <strong>"IoT CORE"</strong>, para criar uma regra entre os dados recebidos e o banco de dados<br> 
        Selecione <strong>"Gerenciar" > "Roteamento de Mensagens" > "Regras"</strong>. <br>
        Como na figura abaixo:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_8.png">
        </figure>
        <br>Nomeie a regra como preferir e clique em <strong> "Próximo"</strong> 
        <br> Em <strong>"Instrução SQL"</strong> iremos substituir o <strong>"ATTRIBUTE" por "*" </strong> e como tópico colocaremos o tópico de publicação do esp, ou seja, <strong>"esp32/pub"</strong>, apagando o restante.<br>
        <br>Como na imagem a seguir:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_9.png">
        </figure>
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora vamos definir as ações, o que acontece com os dados.
        <br> Em <strong>"Ação 1"</strong> selecione <strong>"Tabela Timestream"</strong>.
        <br>Em seguida, selecione o banco de dados criado anteriormente junto com a respectiva tabela.
        <br><strong> Em dimensões, você pode adicionar colunas de sua preferência e seu valor.<br> Em caso de variáveis use ${nome_da_variavel}</strong>.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_10.png">
        </figure><br>
        <strong> Também podemos adicionar o timestamp, para isso, usaremos a configuração na figura a seguir. </strong> <br>
        <br> Por fim, é necessário criar uma função IAM, para isso, clique em <strong>"Criar uma nova função"</strong> e renomeie-a como desejar.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_11.png">
        </figure><br>
     Prossiga e revise se todas as informações estão corretas. Por fim, crie a Regra.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href="https://github.com/Thiago5B/Projeto_IoT-SE/edit/main/PT-BR/Manual/6%20-%20Testando%20Timestream.md"><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>
