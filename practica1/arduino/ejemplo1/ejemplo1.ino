/*
  Ejemplo1 de la practica1 de lab. de Sensores y actuadores.
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  float value = (float)sensorValue*5/1023;
  // print out the value you read:
  Serial.print("Voltaje: ");
  Serial.print(value);
  Serial.println("V");
  delay(10);        // delay in between reads for stability
}
