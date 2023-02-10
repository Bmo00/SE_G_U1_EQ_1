//PrenderLeds_V1 prog4
int led1=10;
int led1=11;
int led1=12;


void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);

  delay(1000);

  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
}
