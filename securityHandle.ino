  /*___________Main Gate___________*/
  String MainGateo = "<div class=\"componants\"><h1>Main Gate is  <big>open</big></h1></div>";
  String MainGatec = "<div class=\"componants\"><h1>Main Gate is  <big>close</big></h1></div>";
  /*________________Car Parking__________________*/
  String Carparked = "<div class= \"componants\"><h1>Car is  <big>parked</big></h1></div>";
  String Carnparked = "<div class= \"componants\"><h1>Car is not <big>parked</big></h1></div>"; 

  void security()
  {
    Maingate = digitalRead(gate);
    Carpark = digitalRead(car);
      Main=MAIN_page;
      if (Maingate==0)
      Main+=MainGateo;
      else
      Main+=MainGatec;
      if (Carpark==0)
      Main+=Carparked;
      else
      Main+=Carnparked;
      server.send(200,"text/html",Main);
    
  }

