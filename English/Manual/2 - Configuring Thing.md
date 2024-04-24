<!DOCTYPE html>
<html lang="en-US">
<head>
<meta charset="UTF-8">
</head>
<body>
<header>
  <h1>IoT Core</h1>
</header>
<main>
  <section>
    <h2>Creating thing</h2>
    <article>
      <h3>Step 01</h3>
      <p>
        On accessing the IoT Core, it is possible to see a horizontal menu on the left of the screen, with some options. <br>
        By now, move to the page <strong>"MANAGE" > "All Devices" > "Things"</strong>, as shown on the following picture.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_1.png">
      </figure>
        <br> In this page, it is possible to see all "things" created.
      </p>
    </article>
    <article>
      <h3>Step 02</h3>
      <p>
       Let's create our first "Thing". <br>
        To do this, click on <strong>"Create Items"</strong>. In this case, only one "Thing" will be created, so select the option <strong>"Create a single item" > "Next"</strong> <br>
        After this, it is possible to name and detail the properties of the "Thing", but now we will leave everything as they are, following the picture.
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_2.png">
        </figure>
      </p>
      <p>
        <strong>Next, we will leave the settings as recommended</strong>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_3.png">
        </figure>
      </p>
      <h3>Step 03</h3>
      <p>
        Now, we need to create a <strong>"Policy"</strong>, conceiving access to IoT resources to the device. Select <strong> "Create Policy" </strong>. <br>
        <figure>
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_4.png">
        </figure>
        <br>On the new page, choose a new name for the new policy and also select <br>
        <strong> "Policy Efect" > "Allow"</strong><br>
        AFter already on policy action, type: IoT:Connect, IoT:Publish, IoT:Recive and Iot:Subscribe.
        <strong> "Policy Resources should be filled with "*" </strong> <br>
        As shown on the following picture
        <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_6.png">
      </p>
      <h3>Step 04</h3>
      <p>
        Now, back to the policies and certificates selection window, choose the new policy recently created.</br><br><strong> Then, click on "Create Item"</strong><br>
        <strong> DOWNLOAD ALL THE FOLLOWING CERTIFICATES AND RENAME EACH ONE TO MAKE THE NEXT STEPS EASIER</strong>, since they wont be avaliable in another moment.<br>
        If you lose then, it will be necessary to restart from the "Step 01" of this same page and do the process all over again. <br>
      <figure><img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_7.png">
      <img src="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/img/core_8.png"></figure><br>
      With that done, we have our first "Thing" created. We are ready to program our ESP32      
      </p>
    </article>
    <h3>Follow the file of the<a href="https://github.com/Thiago5B/Projeto_IoT-SE/blob/main/English/Manual/3%20-%20Implementation%20on%20ESP32.md"><strong> next section</a></strong> of the manual</h3>
  </section>
</main>
</body>
</html>


