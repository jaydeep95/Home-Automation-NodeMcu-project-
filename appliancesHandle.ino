
  /*_____________hall confugration__________*/
                    //____led_____
  String Hall = "<div class=\"compound\">hall</div>";
  String hlighton= "<div class=\"componants\"><h1>light is <big>on</big></h1></div>";
  String hlightoff= "<div class=\"componants\"><h1>light is <big>off</big></h1></div>";
  String hlButton= "<div class=\"button\"><a href=\"/appliances/hLEDswitch\"><button>switch status</button></a>"
                    "</div>";

                    //_________fan________
  String hfanon= "<div class=\"componants\"><h1>fan is <big>on</big></h1></div>";
  String hfanoff= "<div class=\"componants\"><h1>fan is <big>off</big></h1></div>";
  String hfButton= "<div class=\"button\"><a href=\"/appliances/hfanswitch\"><button>switch status</button></a>"
                    "</div>";



  /*____________room configure__________*/
                    //____led_____
  String Room = "<div class=\"compound\">room</div>";
  String rlighton= "<div class=\"componants\"><h1>light is <big>on</big></h1></div>";
  String rlightoff= "<div class=\"componants\"><h1>light is <big>off</big></h1></div>";
  String rlButton= "<div class=\"button\"><a href=\"/appliances/rLEDswitch\"><button>switch status</button></a>"
                    "</div>";

                    //_________fan________
  String rfanon= "<div class=\"componants\"><h1>fan is <big>on</big></h1></div>";
  String rfanoff= "<div class=\"componants\"><h1>fan is <big>off</big></h1></div>";
  String rfButton= "<div class=\"button\"><a href=\"/appliances/rfanswitch\"><button>switch status</button></a>"
                    "</div>";
                    
                    //_______air conditioner__________
  String racon= "<div class=\"componants\"><h1>AC is <big>on</big></h1></div>";
  String racoff= "<div class=\"componants\"><h1>AC is <big>off</big></h1></div>";
  String racButton= "<div class=\"button\"><a href=\"/appliances/racswitch\"><button>switch status</button></a>"
                    "</div>";
  /*_________________hall led______________*/
void  hledswitch(){
  if(hledStatus)
    hledStatus=0;
  else
    hledStatus=1;
    appliaces();
}

void rledswitch(){
  if(rledStatus)
    rledStatus=0;
  else
    rledStatus=1;
    appliaces();
}
void appliaces(){
  Main=MAIN_page;
  Main+=Hall;
  if(hledStatus){
    Main+=hlighton;
    Main+=hlButton;
  }
  else{
    Main+=hlightoff;
    Main+=hlButton;
}
if(hfanStatus){
Main+=hfanon;
Main+=hfButton;}
else{
Main+=hfanoff;
Main+=hfButton;}
Main+=Room;
if(rledStatus){
Main+=rlighton;
Main+=rlButton;}
else{
Main+=rlightoff;
Main+=rlButton;}

if(rfanStatus){
Main+=rfanon;
Main+=rfButton;}
else{
Main+=rfanoff;
Main+=rfButton;}

if(racStatus){
Main+=racon;
Main+=racButton;}
else{
Main+=racoff;
Main+=racButton;}

Main+=hclose;
server.send(200,"text/html",Main);
}
/*_____________________hall fan __________________*/
void Hfan(){
  if(hfanStatus)
    hfanStatus=0;
  else
    hfanStatus=1;
    appliaces();

}

void Rfan(){
  if(rfanStatus)
    rfanStatus=0;
  else
    rfanStatus=1;
    appliaces();

}
void Ac(){
  if(racStatus)
    racStatus=0;
  else
    racStatus=1;
    appliaces();

}

