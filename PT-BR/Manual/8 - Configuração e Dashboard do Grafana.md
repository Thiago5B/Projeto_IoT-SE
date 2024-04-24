<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Configurações do Grafana e Painel</h1>
</header>
<main>
  <section>
    <h2>Plugin AWS Timestream</h2>
    <article>
      <p>
       Para receber um valor do seu banco de dados, é necessário configurar o Plugin AWS Timestream do Grafana. Na página inicial, clique em <strong>Administração</strong>, depois em <strong>Fontes de Dados</strong> e finalmente no botão <strong>Adicionar fonte de dados</strong>. <br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_1.jpg">
        </figure>
        <br><br>Nesta página, pesquise por AWS Timestream e adicione-o. <br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_2.jpg">
        </figure>
        <br><br>
      Com o AWS Timestream adicionado, abra-o e selecione um nome de sua escolha. Em seguida, em Detalhes da Conexão, selecione as informações que melhor se adequam ao seu projeto. Finalmente, em Detalhes do Timestream, escolha de qual <strong>Banco de Dados</strong>, qual <strong>Tabela</strong> e, por último, qual <strong>Medida</strong> você receberá seus dados e qual variável. Em nosso caso, as opções escolhidas foram as que podem ser vistas na figura abaixo. <br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_3.jpg">
        </figure>
      </p>
      <h2>Configuração do Painel</h2>
      <p>
      Agora, clique no botão <strong>Painéis</strong>, onde é possível ver uma opção chamada <strong>"Painel de Aplicativo de Exemplo"</strong>. Na parte mais à direita, haverá um botão <strong>Importar</strong>. Clique nele para importar os dados que você acabou de selecionar, conforme mostrado na figura abaixo<br><br>
        <figure>
           <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_4.jpg">
        </figure>
      <br><br>
      Em seguida, clicando no botão <strong>Exemplo</strong>, uma nova janela será aberta com a página do painel, contendo painéis como gráficos, displays, medidores e infográficos. <br><br>
        <figure>
           <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_5.jpg">
        </figure>
        <br><br><br>
        Em seguida, clique no botão <strong>Adicionar painel</strong>, na parte superior direita da janela. Após o painel ser adicionado, clique no canto superior direito e abra seu menu, onde é possível configurar sua aparência, função e muito mais, tudo usando o espaço de codificação na parte central inferior da página. <br><br>
        <figure>
           <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/grafana_6.jpg">
        </figure>
        <br><br>As configurações e o código para cada tipo de painel podem ser encontrados na página <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Referencias.md"> Referências </a>.
      </p>
    </article>
  </section>
</main>
</body>
</html>
