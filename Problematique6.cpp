// C++ code
// Problematique 6


void disableAll(){
  for (int broche = 7; broche <= 13; broche++) {
    digitalWrite(broche, 0);
  }
  return;
}

int getTimeToWait() {
  return map(analogRead(0), 0, 1023, 100, 500);
}

void order_1() {
  int timeToWait = 100;
  timeToWait = getTimeToWait();
  disableAll();
  // 1
  digitalWrite(10, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 2
  digitalWrite(9, 1);
  digitalWrite(11, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 3
  digitalWrite(8, 1);
  digitalWrite(12, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 4
  digitalWrite(7, 1);
  digitalWrite(13, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 5
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();

  
  // 6
  digitalWrite(7, 0);
  digitalWrite(13, 0);
  
  delay(timeToWait);
  
  // 7
  digitalWrite(8, 0);
  digitalWrite(12, 0);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  
  // 8
  digitalWrite(9, 0);
  digitalWrite(11, 0);
  
  delay(timeToWait);
  disableAll();
  delay(1000);
  return;
}

void order_2() {
  int timeToWait = getTimeToWait();
  disableAll();
  // 1
  digitalWrite(10, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  // 2
  digitalWrite(9, 1);
  digitalWrite(11, 1);
  
  delay(timeToWait);
  
  // 3
  digitalWrite(8, 1);
  digitalWrite(12, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  // 4
  digitalWrite(7, 1);
  digitalWrite(13, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 5
  digitalWrite(7, 1);
  digitalWrite(13, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 6
  digitalWrite(8, 1);
  digitalWrite(12, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 7
  digitalWrite(9, 1);
  digitalWrite(11, 1);
  
  delay(timeToWait);
  timeToWait = getTimeToWait();
  
  disableAll();
  
  // 8
  digitalWrite(10, 1);
  
  delay(timeToWait);
  disableAll();
  delay(1000);
  return;
}


void setup()
{
  pinMode(0, INPUT);
  
  pinMode(1, OUTPUT);
  digitalWrite(1, 1);
  
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
  if (digitalRead(0) == 1) {
	order_1();
  }else{
	order_2();
  }
}
