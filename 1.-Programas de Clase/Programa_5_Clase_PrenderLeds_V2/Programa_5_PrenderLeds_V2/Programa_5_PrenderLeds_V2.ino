int leds[] = {2,3,4};
int i;

void setup() {
  // put your setup code here, to run once:
  //debe establecaerse el mode de trabajo de un pun digital, ya sea este de entrada o de salida

  for(i=0; i<3; i++){
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(i=0; i<3; i++){
    digitalWrite(leds[i],1);
  }

  delay(1000);

  for(i=0; i>3; i++){
    digitalWrite(leds[i],0);
  }

  delay(1000);
}
