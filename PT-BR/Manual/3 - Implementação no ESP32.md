
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
        Acesse e realize o download dos arquivos <strong>"Main.ino" e "secrets.h"</strong>.<br>
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
        <img src="">
        </figure>
        Após isso, é possível nomear e detalhar as propriedades da "Coisa", deixaremos tudo como está, seguindo a figura.
        
      </p>
      <p>
        <strong>A seguir, manteremos as configurações como recomendadas</strong>
        <figure>
        <img src="">
        </figure>
      </p>
      <h3>Passo 03</h3>
      <p>
        Agora precisaremos criar uma <strong>"Política"</strong>, isso faz com que o nosso dispostivo tenha acesso a recursos IoT. Selecione <strong> "Criar Política" </strong>. <br>
        <figure>
        <img src="">
        </figure>
        <br>Na nova página, crie um nome para a nova política e também selecione <br>
        <strong> "Efeito de política" > "Permetir"</strong><br>
        Já em ação de política você deve colocar : IoT:Connect, IoT:Publish, IoT:Recive e Iot:Subscribe.
        <strong> "Recurso da política" deve ser preenchido com "*" </strong> <br>
        Como demonstra a foto a seguir
        <img src="">
      </p>
      <h3>Passo 04</h3>
      <p>
        Agora voltando para a aba de seleção de políticas e certificados, selecione a nova política recem criada.</br><br><strong> Por fim, clique em "Criar Item"</strong><br>
        <strong> FAÇA O DOWNLOAD DE TODOS OS SEGUINTES CERTIFICADOS E RENOMEIE CADA UM PARA FACILITAR NOS PRÓXIMOS PASSOS</strong>, uma vez que não existe outro momento em que estes são disponibilizados.<br>
        Caso os perca, é necessário retornar ao "Passo 01" desta mesma página e refazer todo o processo. <br>
      <figure><img src="">
      <img src=""></figure><br>
      Com isso podemos dizer que temos nossa primeira "coisa" criada. Estamos prontos para programar nosso ESP32.        
      </p>
    </article>
    <h3>Siga para o arquivo <a href=""><strong> da próxima seção</a></strong> do manual</h3>
  </section>
</main>
</body>
</html>


