<!DOCTYPE html>
<html lang="en-US">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Preparing Grafana</h1>
</header>
<main>
  <section>
    <article>
      <h3>Step 01</h3>
      <p>
       Search for <strong>"Grafana"</strong> and select as shown in the figure below.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_1.png">
        </figure>
        <br>In this new tab, select <strong>"Create workspace"</strong>.
        <br>After that, name the workspace and click <strong>"Next"</strong>.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_2.png">
        </figure>
        <br>In <strong>"Authentication methods"</strong> click on <strong>"AWS IAM Identity Center"</strong> and in <strong>"Permission type"</strong>, select <strong>"Service-managed"</strong>.
        <br><strong>IN WORKSPACE CONFIGURATION OPTIONS SELECT "ENABLE PLUGIN MANAGEMENT"</strong>.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_3.png">
        </figure>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_4.png">
        </figure>
        <br>Keep the original settings, as shown in the figure, and click <strong>"Next"</strong>.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_5.png">
        </figure>
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       <br>Now select the data source type as <strong>"Amazon TimeStream" and proceed.</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_6.png">
        </figure> 
      </p>
       <br>Review if all information is correct. Create the workspace.<br>
      <strong>It is normal that after confirming the creation of the workspace it takes 5-10 minutes to create it.</strong>
      </p>
    </article>
    <article>
      <h3>Step 03</h3>
      <p>
       <br>In the search bar, search for and access <strong>"IAM Identity Center"</strong>.<br>
        In this new menu, access <strong>"Users"</strong> and click on <strong>"Add user"</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_9.png">
        </figure> 
        <br>Give a username <strong>, but be careful, this cannot be modified!</strong>, and fill in the other data as a common registration.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_10.png">
        </figure> 
        <br> All optional information will not be covered here. Once the registration is complete, click on <strong>"Next"</strong>.
        <br> In the next tab, click on <strong>"Next"</strong>, group creation is optional.
        <br> Finally, review the information and click on <strong>"Add user"</strong>.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_11.png">
        </figure>
      </p>
      <h3>Step 04</h3>
      <p>
       <br>Once created, return to <strong>"Amazon Grafana"</strong>.
        <br>Select the name of the workspace created.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_7.png">
        </figure> 
        <br>In the new tab, select <strong>"Authentication" > "AWS IAM Identity Center" > "Assign new user or group"</strong>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_8.png">
        </figure> 
        <br>Select the previously created user and click on <strong>"Add user"</strong>.
        <br>
       <br>In the new tab that opens, select the user again, click on <strong>"Action"</strong> and <strong>"Make admin"</strong>.<br>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_14.png">
        </figure>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_15.png">
        </figure>
      </p>
    </article>
    <h3>Step 05</h3>
    <p>
      <br>Now to open the Grafana dashboard, click on the <strong>"Grafana workspace URL"</strong>.
      <br>Access the registered email and validate the email. After that, it will also be possible to create an access password.<br>
      Log in with the username and password for the user.
      <br> <strong>It is important to note that to access Grafana, the email must be confirmed</strong>.
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_16.png">
        </figure>
    </p>
      <h3>Step 06</h3>
    <p>
      <br>Now inside the Grafana admin panel, click on the top left side menu and then <strong>"Administration" > Plugins"</strong>.
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_17.png">
        </figure>
      <br>Select and install the <strong>"Amazon Timestream"</strong> plugin.<br>
      <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/graf_18.png">
        </figure>
    </p>
  </section>
  <h3>Proceed to the file <a href=""><strong> of the next section</a></strong> of the manual</h3>
</main>
</body>
</html>
