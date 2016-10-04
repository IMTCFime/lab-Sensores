/*  
 *   
 *  
 */
// Se definen los pines a usar
const int paso = 3; 
const int direccion = 4; 
 
void setup() {
  // Se asignan como salidas los pines
  pinMode(paso,OUTPUT); 
  pinMode(direccion,OUTPUT);
}
void loop() {
  digitalWrite(direccion,HIGH); // Hace que el motor gire en un sentido
  // Se generan 200 pulsos para completar un ciclo completo
  for(int x = 0; x < 200; x++) {
    digitalWrite(paso,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(paso,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // Se hace una pausa de 1 segundo
  
  digitalWrite(dirPin,LOW); //Se cambia la direccion de giro
  // Se generan 200 pulsos para completar el ciclo
  for(int x = 0; x < 200; x++) {
    digitalWrite(paso,HIGH);
    delayMicroseconds(500);
    digitalWrite(paso,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}
