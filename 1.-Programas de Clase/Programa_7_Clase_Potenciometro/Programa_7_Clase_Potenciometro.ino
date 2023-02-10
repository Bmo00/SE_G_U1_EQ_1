//prog 7 potenciometro
int potenciometro = A0; //Analogico de A0 - A5
//3 entradas:
//Izquierda (gnd, 5v)
//centro = A0
//derecha (5v,gnd)

void setup() {
  // put your setup code here, to run once:
  //Los pines analogicos, solo funcionan como entradas, por lo que no se requiere que se defina el mode de trabajo
  //ADC = // 5 volts de voltaje de referencia //10 bits de resolucion --> 1024 valores = {0,1023}
  //0 = 0 volts
  //1023 = 5 volts
  
  Serial.begin(9600);
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor=analogRead(potenciometro);
  Serial.println("Valor Leido: " + String(valor));
  delay(250);//ms
}
