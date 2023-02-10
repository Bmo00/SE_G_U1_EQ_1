int led1=2, led2=3, led3=4, led4=5, led5=6;
int Pot1=A0, Pot2=A1;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
}

int A,B;
void loop() {
  A=analogRead(Pot1);
  B=analogRead(Pot2);

  A=map(A,0,1023,1,4);
  B=map(B,0,1023,1,4);

  if(A==3){
    Serial.println("A: 1"); 
    digitalWrite(led1,1);
  }else if(A==2){
    Serial.println("A: 0");
    digitalWrite(led1,0);
  }
  if(B==3){
    Serial.println("B: 1"); 
    digitalWrite(led2,1);
  }else if(B==2){
    Serial.println("B: 0");
    digitalWrite(led2,0);
  }

  if(A==B){
    digitalWrite(led3,1);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
  }else if(A>B){
    digitalWrite(led3,0);
    digitalWrite(led4,1);
    digitalWrite(led5,0);
  }else{
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,1);
  }
  delay(1000);
}
