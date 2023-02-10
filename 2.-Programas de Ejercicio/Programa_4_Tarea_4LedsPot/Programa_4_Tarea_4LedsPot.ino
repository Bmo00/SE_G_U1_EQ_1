int potenciometro = A0; //Analogico de A0 - A5
int led1 = 4, led2 = 5, led3 = 6, led4 = 7; 
int cont=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);
  valor = map(valor,0,1023,0,4);
  Serial.println("Valor Mapeado: " + String(valor));

if(valor==0){
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
}
  if(valor==1){
    digitalWrite(led1,1);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
  }
  else if(valor==2){
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
  }
  else if(valor==3){
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,1);
    digitalWrite(led4,0);
  }
  else if(valor==4){
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,1);
    digitalWrite(led4,1);
}
}
