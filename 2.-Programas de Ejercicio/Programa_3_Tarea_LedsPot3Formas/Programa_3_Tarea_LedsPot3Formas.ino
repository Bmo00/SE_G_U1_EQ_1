int potenciometro = A0; //Analogico de A0 - A5
int led1 = 2,led2 = 3,led3 = 4,led4 = 5,led5 = 6,led6 = 7,led7 = 8,led8 = 9; 
int i=1;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  Serial.begin(9600);
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);
  valor = map(valor,0,1023,0,2);
  Serial.println("Valor Mapeado: " + String(valor));
  
  if(valor==0){
    digitalWrite(led1,1);
    delay(50);
    digitalWrite(led1,0);
    delay(50);
    digitalWrite(led2,1);
    delay(50);
    digitalWrite(led2,0);
    delay(50);
    digitalWrite(led3,1);
    delay(50);
    digitalWrite(led3,0);
    delay(50);
    digitalWrite(led4,1);
    delay(50);
    digitalWrite(led4,0);
    delay(50);
    digitalWrite(led5,1);
    delay(50);
    digitalWrite(led5,0);
    delay(50);
    digitalWrite(led6,1);
    delay(50);
    digitalWrite(led6,0);
    delay(50);
    digitalWrite(led7,1);
    delay(50);
    digitalWrite(led7,0);
    delay(50);
    digitalWrite(led8,1);
    delay(50);
    digitalWrite(led8,0);
    delay(50);
  }
  
  else if(valor==1){
    digitalWrite(led1,1);
    digitalWrite(led8,1);
    delay(50);
    digitalWrite(led1,0);
    digitalWrite(led8,0);
    delay(200);
    digitalWrite(led2,1);
    digitalWrite(led7,1);
    delay(50);
    digitalWrite(led2,0);
    digitalWrite(led7,0);
    delay(200);
    digitalWrite(led3,1);
    digitalWrite(led6,1);
    delay(50);
    digitalWrite(led3,0);
    digitalWrite(led6,0);
    delay(200);
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    delay(50);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    delay(200);
  }
  
   else{
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    delay(100);
    digitalWrite(led3,1);
    digitalWrite(led6,1);
    delay(100);
    digitalWrite(led2,1);
    digitalWrite(led7,1);
    delay(100);
    digitalWrite(led1,1);
    digitalWrite(led8,1);
    delay(100);

    digitalWrite(led1,0);
    digitalWrite(led8,0);
    delay(100);
    digitalWrite(led2,0);
    digitalWrite(led7,0);
    delay(100);
    digitalWrite(led3,0);
    digitalWrite(led6,0);
    delay(100);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    delay(100);
  }
  
  delay(250);
}
