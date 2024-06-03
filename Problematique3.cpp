// C++ code
// Problematique 3


void setup()
{
  pinMode(0, INPUT);
  
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(0) == 1) {
  	digitalWrite(13, 1);
  	digitalWrite(7, 0);
  }else{
  	digitalWrite(7, 1);
  	digitalWrite(13, 0);
  }
}
