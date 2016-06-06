/*
  Ejemplo1 de la practica2 de lab. de Sensores y actuadores.
 */

// La funcion void se ejecuta una sola vez al correr el codigo:
void setup() {
  // Inicializa la comunicacion Serial a una velocidad de 9600 bits por segundo:
  Serial.begin(9600);
}

// La funcion loop se ejecuta infinitamente despues de que se ejecuto la funcion setup:
void loop() {
  // Lee el valor en la entrada analogica :
  int sensorValue = analogRead(A2);
  // Convertimos los valores leidos de 0-1023 a 0-5
  float value = (float)sensorValue*5/1023;
  // Imprimimos los valores leido como voltaje:
  Serial.print("Voltaje: ");
  Serial.print(value);
  Serial.println("V");
  delay(10);        // esperamos 10 ms antes de volver a ejecutar el loop
}
