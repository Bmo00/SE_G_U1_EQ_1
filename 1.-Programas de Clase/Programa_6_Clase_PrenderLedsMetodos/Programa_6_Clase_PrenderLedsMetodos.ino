//prenderledsmetodos prog6
int leds[] = {2,3,4};
int i;
int tiempoPrendido;
int tiempoApagado;

void setup() {
  // put your setup code here, to run once:
  //debe establecaerse el mode de trabajo de un pun digital, ya sea este de entrada o de salida
  tiempoPrendido=1000;
  tiempoApagado=500;
  
  for(i=0; i<3; i++){
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  actionLED(1);
    delay(tiempoPrendido);
  actionLED(0);
    delay(tiempoApagado);
}

void actionLED(int v){
  for(i=0; i<3; i++){
    digitalWrite(leds[i],v);
  }
}
