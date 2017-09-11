/* USB Logic Analyzer 24Mhz 8CH [B008] : http://rdiot.tistory.com/138 [RDIoT Demo] */

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);  
  pinMode(2, OUTPUT);  
}

void loop() {
  // PIN0 - HIGH
  digitalWrite(0, HIGH);
  
  // PIN1 - 10sec
  for (int i=0; i<10; i++) {
    digitalWrite(1, LOW);
          //PIN2 - 5.125us * 3 times
          digitalWrite(2, HIGH);
          digitalWrite(2, LOW);
          digitalWrite(2, HIGH);
          digitalWrite(2, LOW);
          digitalWrite(2, HIGH);
          digitalWrite(2, LOW);          
    // PIN1 - 0.5 sec
    delay(500);
    digitalWrite(1, HIGH);
    // PIN1 - 0.5 sec
    delay(500);
  }

  // PIN0 - LOW
  digitalWrite(0, LOW);

  // Delay 1sec
  delay(1000);
}
