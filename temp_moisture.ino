void readtemp(){
  Main=MAIN_page;
  RoomTemp = 25;
  String temp=String(RoomTemp);
  String temp2=String(HallTemp);
  int sm = analogRead(soilMoisture);
  String temphtml = "<h2>room temparature is</h2>";
  String tempcel= " &#8451;<br>";
  String temp2html="<h2>Hall Temparature</h2>";
  String temp2cel=" &#8451;<br>";
  String soilMD = "<h2> soil is DRY</h2>";
  String soilMW = "<h2> soil is WET</h2>";
  Main+=temphtml;
  Main+=temp;
  Main+=tempcel;
  Main+=temp2html;
  Main+=temp2;
  Main+=temp2cel;
  if (sm)
  Main+=soilMD;
  else
  Main+=soilMW;
  Main+=hclose;
}
void handleRoot(){
 readtemp();
server.send(200,"text/html",Main);
}

