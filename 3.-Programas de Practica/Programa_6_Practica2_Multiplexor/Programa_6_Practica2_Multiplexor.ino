int led1 = 2, led2 = 3, led3 = 4, led4 = 5, led5 = 6;
int pot1 = A0;
int pot2 = A1;
int v1, v2;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);


  Serial.begin(9600);
}

void loop() {
  v1 = analogRead(pot1);
  v2 = analogRead(pot2);

  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
  digitalWrite(led5, 0);

  if (v1 < 1000 && v2 < 1000) {

    delay(500);
    digitalWrite(led1, 1);
    digitalWrite(led5, 1);
    delay(500);
    digitalWrite(led2, 1);
    delay(500);
    digitalWrite(led3, 1);
    delay(500);
    digitalWrite(led4, 1);
    delay(500);
  } else if (v1 > 1000 && v2 < 1000) {
    delay(500);
    digitalWrite(led1, 1);
    delay(500);
    digitalWrite(led2, 1);
    digitalWrite(led5, 1);
    delay(500);
    digitalWrite(led3, 1);
    delay(500);
    digitalWrite(led4, 1);
    delay(500);
  } else if (v1 < 1000 && v2 > 1000) {
    delay(500);
    digitalWrite(led1, 1);
    delay(500);
    digitalWrite(led2, 1);
    delay(500);
    digitalWrite(led3, 1);
    digitalWrite(led5, 1);
    delay(500);
    digitalWrite(led4, 1);
    delay(500);
  } else if (v1 > 1000 && v2 > 1000) {
    delay(500);
    digitalWrite(led1, 1);
    delay(500);
    digitalWrite(led2, 1);
    delay(500);
    digitalWrite(led3, 1);
    delay(500);
    digitalWrite(led4, 1);
    digitalWrite(led5, 1);
    delay(500);
  }
}
