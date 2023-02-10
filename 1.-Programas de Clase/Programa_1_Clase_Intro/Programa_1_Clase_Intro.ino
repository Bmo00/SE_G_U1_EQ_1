
byte variable;

void setup() {
  variable = 0;
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(variable++);

  delay(250);

}
