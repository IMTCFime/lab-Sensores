int ledRojo = 13;
int ledVerde = 12;
void setup() {
  Serial.begin(9600);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // read the input on analog pin 0:
  int pot = analogRead(A0);
  if(pot <= 512){
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }else{
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
  }
  delay(10);       
}
