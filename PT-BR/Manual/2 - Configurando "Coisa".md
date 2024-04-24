<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>IoT Core</h1>
</header>
<main>
  <section>
    <h2>Criando coisa</h2>
    <article>
      <h3>Passo 01</h3>
      <p>
        Ao acessar o IoT CORE, é possível observar na parte esquerda, um menu horizontal com diversas opções.<br>
        Por hora, vamos para a aba <strong>"GERENCIAR" > "Todos os dispositivos" > "Coisas"</strong> , como demonstrado na seguinte figura.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_1.png">
      </figure>
        <br> Nesta tela é possível observar todas as "Coisas" criadas.
      </p>
    </article>
    <article>
      <h3>Passo 02</h3>
      <p>
        Vamos criar nossa primeira "Coisa". <br>
        Para isso, clique em <strong>"Criar Itens"</strong>. Neste caso será criado apenas uma "Coisa" então, selecione a opção <strong>"Criar um único item" > "Próximo"</strong> <br>
        Após isso, é possível nomear e detalhar as propriedades da "Coisa", deixaremos tudo como está, seguindo a figura.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_2.png">
        </figure>
      </p>
      <p>
        <strong>A seguir, manteremos as configurações como recomendadas</strong>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_3.png">
        </figure>
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora precisaremos criar uma <strong>"Política"</strong>, isso faz com que o nosso dispostivo tenha acesso a recursos IoT. Selecione <strong> "Criar Política" </strong>. <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_4.png">
        </figure>
        <br>Na nova página, crie um nome para a nova política e também selecione <br>
        <strong> "Efeito de política" > "Permetir"</strong><br>
        Já em ação de política você deve colocar : IoT:Connect, IoT:Publish, IoT:Recive e Iot:Subscribe.
        <strong> "Recurso da política" deve ser preenchido com "*" </strong> <br>
        Como demonstra a foto a seguir
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_6.png">
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora voltando para a aba de seleção de políticas e certificados, selecione a nova política recem criada.</br><br><strong> Por fim, clique em "Criar Item"</strong><br>
        <strong> FAÇA O DOWNLOAD DE TODOS OS SEGUINTES CERTIFICADOS E RENOMEIE CADA UM PARA FACILITAR NOS PRÓXIMOS PASSOS</strong>, uma vez que não existe outro momento em que estes são disponibilizados.<br>
        Caso os perca, é necessário retornar ao "Passo 01" desta mesma página e refazer todo o processo. <br>
      <figure><img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_7.png">
      <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_8.png"></figure><br>
      Com isso podemos dizer que temos nossa primeira "coisa" criada. Estamos prontos para programar nosso ESP32.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/PT-BR/Manual/3%20-%20Implementa%C3%A7%C3%A3o%20no%20ESP32.md"><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>


