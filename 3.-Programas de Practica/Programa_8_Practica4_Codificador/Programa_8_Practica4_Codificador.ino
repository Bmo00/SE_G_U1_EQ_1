int led1=2, led2=3, led3=4, led4=5;
int Pot1=A0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
}

int N,i,b;
void loop() {
  int Bin[]={0,0,0,0};
  int j=-1;
  
  N=analogRead(Pot1);
  N=map(N,0,1023,0,10);
  Serial.println(N);

  for(i=N;i>0;){
    j++;
    b=i%2;
    Bin[j]=b;
    i=i/2;
  }

  if(N==0){
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
  }else{
    digitalWrite(led1,Bin[3]);
    digitalWrite(led2,Bin[2]);
    digitalWrite(led3,Bin[1]);
    digitalWrite(led4,Bin[0]);
  }
  
  delay(1000);
}
