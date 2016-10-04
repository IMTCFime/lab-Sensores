// Pin DIGITALES donde se conectan los leds
int pinLed1 = 2;
int pinLed2 = 3;
int pinLed3 = 4;

// Pin ANALÓGICO de entrada para el light dependant resistor
int pinLDR = 0;

// Variable donde se almacena el valor del LDR
const int valorLDR = 0;  
 
void setup()
{
//configurar el puerto serial
  Serial.begin(9600);
  
//configuracion de pines
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
//iniciar el programa con los leds apagados
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
}
 
void loop()
{ 
//lectura analogica (convertidos analógico-digital 10bits - valores de 0-1023)
  valorLDR= analogRead(pinLDR);
  
// Devolver el valor leido a nuestro monitor serial en el IDE de Arduino
  Serial.println(valorLDR);
 
// Encender los leds apropiados de acuerdo al valor de
  if(valorLDR > 256)
  {
    digitalWrite(pinLed1, HIGH);
  }
  if(valorLDR > 512)
  {
    digitalWrite(pinLed2, HIGH);
  }
  if(valorLDR > 768)
  {
    digitalWrite(pinLed3, HIGH);
  }
 
  delay(50);
}
