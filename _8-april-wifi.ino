#include<ESP8266WiFi.h>//handles wifi related functionality (connection,AP)
#include<WiFiClient.h>//sends request to browser
#include<ESP8266WebServer.h>//it handles all HTTP protocols
#include "Main.h"//Html code written in main.h
/*_________ssid and password to connect to wifi________*/
const char *ssid = "Apple";
const char*password = "jd123456";

ESP8266WebServer server(80);// server on port 80(default)
  /*________Initial Status of Leds set to zero_________*/
int  hledStatus=0;
int  hfanStatus=0;
int  rledStatus=0;
int  rfanStatus=0;
int  racStatus=0;
int  car = D7;
int  gate = D4;
int ac = D1;
int hfan = D2;
int rlight = D3;
int  rfan = D8;
int hlight  = D0;
int RoomTemp, HallTemp=12;
int soilMoisture = D6;
int  Maingate;
int  Carpark;
String Main= MAIN_page;
String hclose = "</body></html>";
void setup(){
  configure();
  Serial.begin(9600);
  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.print("IP address");
  Serial.println(WiFi.localIP());
  server.on("/", handleRoot); //Which routine to handle at root location
  server.on("/home", handleRoot);
  server.on("/appliances",appliaces);
  server.on("/security",security);
  server.on("/appliances/hLEDswitch",hledswitch);
  server.on("/appliances/rLEDswitch",rledswitch);
  server.on("/appliances/hfanswitch",Hfan);
  server.on("/appliances/rfanswitch",Rfan);
  server.on("/appliances/racswitch",Ac);
  server.begin();
}
void loop(){
  server.handleClient();
  delay(100);
  Handle();
}
void configure(){
  pinMode(hlight,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(soilMoisture,INPUT);
  pinMode(gate,INPUT);
  pinMode(car,INPUT);
  pinMode(rlight,OUTPUT);
  pinMode(rfan,OUTPUT);
  pinMode(hfan,OUTPUT);
  pinMode(ac,OUTPUT);
 }
void Handle()
{
  if (analogRead(A0)>25){}
  else{}
  //analogWrite(D1,30);
  digitalWrite(hlight,hledStatus);
  digitalWrite(ac,racStatus);
  digitalWrite(rfan,rfanStatus);
  digitalWrite(hfan,hfanStatus);
  digitalWrite(rlight,rledStatus);
  //Serial.println(digitalRead(gate));
}

