int fototransistor = A0;
const int numMuestras = 10;
int muestras[numMuestras];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int promedio;
  int i;

  for (i=0;i < numMuestras;i++){
    muestras[i] = analogRead(fototransistor);
    delay(10);
  }

  promedio = 0;
  for (i=0; i < numMuestras;i++){
    promedio += muestras[i];  
  }

  promedio /= numMuestras;
  
  Serial.print("Ain: ");
  Serial.print(promedio);

  float voltaje;
  voltaje = (float)promedio*5/1023;
  
  Serial.print("\tVout: ");
  Serial.print(voltaje);

  float corriente;
  corriente = voltaje/5;

  Serial.print("\tI: ");
  Serial.print(corriente);
  Serial.println("A");
}
