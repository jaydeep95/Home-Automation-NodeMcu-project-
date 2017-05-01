const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<style>
.header{
	margin:0%;
	font-family:'Oswald',sans-serif;
	padding:10px 30px 30px 10px;
	text-transform:uppercase;
	background-color:#F5F5F5;
	border-bottom:1px solid #AAA;
	width:100%;
}
 .compound{
  font-family:'Oswald',sans-serif;
  padding:10px 30px 30px 10px;
  text-transform:uppercase;
  background-color:#FAA;
  border-bottom:1px solid #AAA;
  width:100%;
  margin:0%;
  text-align:center;
  color:#808000;
  font-size:30px;
 }
.heading{
	text-align:center;
	color:#800000;
}
button{
  color:#123243;
  background-color:#FFA500;
  width:9%;
  text-align:center;
}
ul{
  width:100%;
}
li{
	color:00008B;
	display:inline-block;
	width:33%;
	text-align:center;
</style>
</head>
<body>
<div class="header"><div class="heading"><h1>home automation</h1><br></div>
<ul>
<a href="/home"><li>home</li><a>
<a href="/appliances"><li>appliances</li><a>
<a href="/security"><li>security</li><a>
</ul>
</div>
)=====";
