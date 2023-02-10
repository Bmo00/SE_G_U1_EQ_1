int led1=2, led2=3, led3=4;
int Pot1=A0;
int Pot2=A1;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}

int P1,P2,suma,valor1,valor2;
void loop() {
  P1=analogRead(Pot1);
  P2=analogRead(Pot2);
  Serial.println("Pot1: "+String(P1));
  Serial.println("Pot2: "+String(P2));

  suma=P1+P2;
  
  if(P1>512){
    digitalWrite(led1,1);
  }else{
    digitalWrite(led1,0);
  }

  if(P2>512){
    digitalWrite(led2,1);
  }else{
    digitalWrite(led2,0);
  }

  if(suma<512){
    digitalWrite(led3,0);
  }else{
    digitalWrite(led3,1);
  }
  delay(500);
}
