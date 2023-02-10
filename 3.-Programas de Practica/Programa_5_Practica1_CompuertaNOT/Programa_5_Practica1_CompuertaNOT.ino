int led1=2, led2=3;
int Pot1=A0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

int P1,P2,suma,valor1,valor2;
void loop() {
  P1=analogRead(Pot1);
  Serial.println("Pot1: "+String(P1));
  
  if(P1>512){
    digitalWrite(led1,1);
    digitalWrite(led2,0);
  }else{
    digitalWrite(led1,0);
    digitalWrite(led2,1);
  }
  delay(500);
}
