int resistenciaSerie = 10000;
int termistor = A0;
int Ro = 10000;
int To = 25;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // Primero leemos el pin analogico del termistor 
  float ADC;
  ADC = analogRead(termistor);
  Serial.print("lectura ADC: ");
  Serial.print(ADC);

  //convertimos el valor leido a resistencia usando la formula..
  float resistencia;
  resistencia = (1023/ADC) - 1;
  resistencia = resistenciaSerie / resistencia;
  Serial.print("\tResistencia: ");
  Serial.print(resistencia);


  //convertimos el valor de la resistencia a temperatura
  float temp;
  temp = resistencia / Ro;
  temp = log(temp);
  temp /= 3950;
  temp += 1.0 / (To + 273.15);
  temp = 1.0 / temp;
  temp -= 273.15; 
  Serial.print("\tTemperatura: ");
  Serial.print(temp);
  Serial.println(" *C");

  
}
