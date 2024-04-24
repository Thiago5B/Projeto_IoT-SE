<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>Grafana Settings and Dashboard</h1>
</header>
<main>
  <section>
    <h2>AWS Timestream Plugin</h2>
    <article>
      <p>
       In order to receive a value from your database, it is needed to configure the Grafana AWS Timestream Plugin. On the home page, click on <strong>Admninistration</strong>, then <strong>Data Sources</strong> and finally on the <strong>Add data source</strong> button and search for AWS Timestream, then add it. <br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
        <br>
      With the AWS Timestream added, open it and select a name of your choice. Then, on Connection Details, select the informations that better fit for your project. Finally, on Timestream Details, choose which <strong>Database</strong>, then which <strong>Table</strong>, and lastly which <strong>Measure</strong> you will receive your data from, and what variable. In our case, the chosen options were such as seen on the figure below. <br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
      </p>
      <h2>Dashboard configuration</h2>
      <p>
      <br><br>Now, click on the <strong>Dashboards</strong> button, where it is possible to see a option called <strong>"Sample Application Dashboard"</strong>. On the rightmost part of it, will be a <strong>Import</strong> button. Click on it in order to import the data you have just selected, such as seen on the figure below<br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure>
      <br><br>
      Then, clicking on the <strong>Sample</strong> button, a new window will open with the dashboard page, containing panels such as graphics, displays, gauges and infographs. <br><br>
        <figure>
          <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/mqtt_1.png">
        </figure
        <br><br><br>
        Then, click on the <strong>Add panel</strong> button, on the top right part of the window. After the panel is added, click on the top right corner and open it's menu, where it is possible to configure it's apearance, function and more, all using the coding space on the center-bottom of the page. The settings and code for each kind of panel can be found on the <a href="https://github.com/Thiago5B/Projeto_IoT-SE/main/blob/English/Manual/References.md"> References </a> page.
      </p>
    </article>
  </section>
</main>
</body>
</html>

