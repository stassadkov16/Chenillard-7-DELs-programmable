// C++ code
// Problematique 5




int timeToWait = 0;
bool isEnabled = false;

void setup()
{
  pinMode(0, OUTPUT);
  digitalWrite(0, 1);
 
  pinMode(2, INPUT);
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  timeToWait = map(analogRead(0), 0, 1023, 100, 500);
  int led = 10;
  if (digitalRead(2) == 1) {
  	led = 10;
  }else{
  	led = 11;
  }
  if (isEnabled == false) {
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(led, 1);
    isEnabled = true;
    delay(timeToWait);
  }else{
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    isEnabled = false;
    delay(timeToWait);
  
  }
}
