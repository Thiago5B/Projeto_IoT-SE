<!DOCTYPE html>
<html lang="en-US">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Setting Up a Database</h1>
</header>
<main>
  <section>
    <h2>Timestream Database</h2>
    <article>
      <h3>Step 01</h3>
      <p>
       Search for <strong>"Timestream"</strong> and select it as shown in the figure below.<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_1.png">
        </figure>
        <br>In this new tab, select <strong>"Resources">"Databases"</strong>, as shown in the following figure.
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_2.png">
        </figure>
        <br>Click on <strong>"Create database"</strong> and name your database<br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_3.png">
        </figure>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_4.png">
        </figure>
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       <br>With the database created, access it and select the tab <strong>"Tables">"Create table"</strong><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_5.png">
        </figure> 
       <br>In this new tab, give your table a name and select <strong>"Custom partitioning">"Measure name" and do not select "Enforce partition key on record"</strong><br>
        <br>As shown below:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_6.png">
        </figure>
        <br>Finally, in <strong>"Data retention"</strong> leave it as in the following image and deselect <strong>"enable magnetic storage writes"</strong> and create the table.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_7.png">
        </figure>
      </p>
      <h3>Step 03</h3>
      <p>
        Now let's go back to <strong>"IoT CORE"</strong>, to create a rule between the received data and the database<br> 
        Select <strong>"Manage" > "Message Routing" > "Rules"</strong>, and paste the publication topic. In this case, I will use the topic <strong> esp32/sub </strong>, to demonstrate that the connection is active. <br>
        As in the figure below:
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_8.png">
        </figure>
        <br>Name the rule as you prefer and click on <strong> "Next"</strong> 
        <br> In the <strong>"SQL Statement"</strong> we will replace the <strong>"ATTRIBUTE" with "*" </strong> and as the topic we will put the esp's publication topic, that is, <strong>"esp32/pub"</strong>, deleting the rest.<br>
        <br>As in the following image:<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_9.png">
        </figure>
      </p>
      <h3>Step 04</h3>
      <p>
        Now we will define the actions, what happens with the data.
        <br> In <strong>"Action 1"</strong> select <strong>"Timestream table"</strong>.
        <br>Then select the previously created database along with the respective table.
        <br><strong> In dimensions, you can add columns of your preference and their value.<br> In case of variables use ${variable_name}</strong>.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_10.png">
        </figure><br>
        <strong> We can also add the timestamp, for that, we will use the configuration in the following figure. </strong> <br>
        <br> Finally, it is necessary to create an IAM role, to do so, click on <strong>"Create a new role"</strong> and rename it as you wish.<br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/db_11.png">
        </figure><br>
     Proceed and review if all information is correct. Finally, create the Rule.        
      </p>
    </article>
    <h3>Go to the file <a href=""><strong> of the next section</a></strong> of the manual</h3>
  </section>
</main>
</body>
</html>
