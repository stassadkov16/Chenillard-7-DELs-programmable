// C++ code
// Problematique 1


void disableAll(){
  for (int broche = 7; broche <= 13; broche++) {
    digitalWrite(broche, 0);
  }
  return;
}

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  disableAll();
  // 1
  digitalWrite(10, 1);
  
  delay(500);
  
  disableAll();
  
  // 2
  digitalWrite(9, 1);
  digitalWrite(11, 1);
  
  delay(500);
  
  disableAll();
  
  // 3
  digitalWrite(8, 1);
  digitalWrite(12, 1);
  
  delay(500);
  
  disableAll();
  
  // 4
  digitalWrite(7, 1);
  digitalWrite(13, 1);
  
  delay(500);
  
  disableAll();
  
  // 5
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  
  delay(500);

  
  // 6
  digitalWrite(7, 0);
  digitalWrite(13, 0);
  
  delay(500);
  
  // 7
  digitalWrite(8, 0);
  digitalWrite(12, 0);
  
  delay(500);
  
  
  // 8
  digitalWrite(9, 0);
  digitalWrite(11, 0);
  
  delay(500);
  disableAll();
  delay(1000);
}
