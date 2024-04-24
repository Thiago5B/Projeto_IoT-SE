<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Preparando o Grafana</h1>
</header>
<main>
  <section>
    <article>
      <h3>Passo 01</h3>
      <p>
       Pesquise por <strong>"Grafana"</strong> e selecione como demonstrado na figura abaixo.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_1.png">
        </figure>
        <br>Nesta nova aba, selecione <strong>"Criar espaço de trabalho"</strong>.
        <br>Após isso, nomeie o espaço de trabalho e clique <strong>"Próximo"</strong>.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_2.png">
        </figure>
        <br>Em <strong>"Métodos de autenticação" </strong>clique em <strong>"AWS IAM Identity Center"</strong> e em <strong>"Tipo de permissão"</strong>, selecione <strong>"Gerenciado pelo serviço"</strong>.
        <br><strong>EM OPÇÕES DE CONFIGURAÇÃO DO ESPAÇO DO TRABALHO SELECIONE "ATIVAR O GERENCIAMENTO DE PLUG-IN"</strong>.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_3.png">
        </figure>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_4.png">
        </figure>
        <br>Mantenha as configurações originais, como demonstrado na figura, e clique em <strong>"Próximo"</strong>.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_5.png">
        </figure>
      </p>
    </article>
    <article>
      <h3>Passo 02</h3>
      <p>
       <br>Agora selecione o tipo de fonte de dados como sendo <strong>"Amazon TimeStream" e avance.</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_6.png">
        </figure> 
      </p>
       <br>Revise se todas as informações estão de acordo. Crie o espaço de trabalho.<br>
      <strong>É normal que após confirmar a criação do espaço de trabalho leve um tempo de 5-10 minutos para a criação do mesmo.</strong>
      </p>
    </article>
    <article>
      <h3>Passo 03</h3>
      <p>
       <br>Na barra de pesquisa procure e acesse <strong>"IAM Identity Center"</strong>.<br>
        Neste novo menu acesse <strong>"Usuários"</strong> e clique em <strong>"Adicionar usuário"</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_9.png">
        </figure> 
        <br>Dê um nome de usuário <strong>, mas atenção, este não pode ser modificado!</strong>, e preencha os demais dados como um cadastro comum.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_10.png">
        </figure> 
        <br> Todas as informações opcionais não serão tratadas aqui. Uma vez completado o cadastro, clique em <strong>"Próximo</strong>.
        <br> Na próxima aba, clique em <strong>"Próximo"</strong>, a criação de grupos é opcional.
        <br> Por fim, revise as informações e clique em <strong>"Adicionar usuário"</strong>.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_11.png">
        </figure>
      </p>
      <h3>Passo 04</h3>
      <p>
       <br>Assim que criado, retorne ao <strong>"Amazon Grafana"</strong>.
        <br>Selecione sobre o nome do espaço de trabalho criado.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_7.png">
        </figure> 
        <br>Na nova aba selecione <strong>"Autenticação" > "AWS IAM Identity Center" > "Atribuir novo usário ou grupo"</strong>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_8.png">
        </figure> 
        <br>Selecione o usuário anteriormente criado e clique em <strong>"Adicionar usuário"</strong>.
        <br>
       <br>Na nova aba aberta, selecione novamente o usuário, clique em <strong>"Ação"</strong> e <strong>"Tornar administrador"</strong>.<br>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_14.png">
        </figure>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_15.png">
        </figure>
      </p>
    </article>
    <h3>Passo 05</h3>
    <p>
      <br>Agora para abrir o painel do grafana, clique na <strong>"URL do espaço de trabalho do Grafana"</strong>.
      <br>Acesse o e-mail cadastrado e realize a validação do e-mail. Após isso, também será possível criar uma senha de acesso.<br>
      Realize o login com o nome de usuário e senha pelo usuário.
      <br> <strong>É importante ressaltar que para acessar o Grafana, o e-mail deve obrigatóriamente ser confirmado</strong>.
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_16.png">
        </figure>
    </p>
      <h3>Passo 06</h3>
    <p>
      <br>Agora já dentro do painel de administrador do Grafana, clique no menu lateral superior esquerdo e em seguida <strong>"Administration" > Plugins"</strong>.
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_17.png">
        </figure>
      <br>Selecione e instale o plugin <strong>"Amazon Timestream"</strong>.<br>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_18.png">
        </figure>
    </p>
  </section>
  <h3>Siga para o arquivo <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/8%20-%20Configura%C3%A7%C3%A3o%20e%20Dashboard%20do%20Grafana.md"><strong> da próxima seção</a></strong> do manual</h3>
</main>
</body>
</html>
