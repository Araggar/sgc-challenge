<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
body {
  margin: 0;
  font-family: Arial, Helvetica, sans-serif;
}

.swap-on-hover {
  position: relative;	
	margin:  0 auto;
}

/* Select the image and make it absolute to the container */
.swap-on-hover img {
  position: absolute;
  top:0;
  left:0;
	overflow: hidden;
}

/* 
	We set z-index to be higher than the back image, so it's alwyas on the front.

We give it an opacity leaner to .25s, that way when we hover we will get a nice fading effect. 
*/
.swap-on-hover .swap-on-hover__front-image {
  z-index: 9999;
  transition: opacity .5s linear;
  cursor: pointer;
}

/* When we hover the figure element, the block with .swap-on-hover, we want to use > so the front-image is going to have opacity of 0, which means it will be hidden, to the back image will show */
.swap-on-hover:hover > .swap-on-hover__front-image{
  opacity: 0;
}

.topnav {
  overflow: hidden;
  background-color: #333;
}

.topnav a {
  float: left;
  color: #f2f2f2;
  text-align: center;
  padding: 14px 16px;
  text-decoration: none;
  font-size: 17px;
}

.topnav a:hover {
  background-color: #ddd;
  color: black;
}

.topnav a.active {
  background-color: #c7300e;
  color: white;
}
</style>
</head>
<body>

<div class="topnav">
  <a class="active" href="https://lucasmpalma.github.io/SGC-2020/">Home</a>
  <a href="https://github.com/lucasmpalma/SGC-2020/">Repository</a>
  <a href="https://github.com/LabSEC/libcryptosec">LibcryptoSEC</a>
  <a href="https://www.openssl.org/source/old/1.0.2/">OpenSSL</a>
</div>

<div style="padding-left:16px">
	<figure class="swap-on-hover">
 	<img  class="swap-on-hover__front-image" src="images/sgc-challenge-2020.png"/>
  	<img class="swap-on-hover__back-image" src="images/mission-impossible-one.png"/>
	</figure>
</div>

</body>
</html>
