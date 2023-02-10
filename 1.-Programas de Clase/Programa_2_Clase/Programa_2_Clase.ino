byte variable;

void setup() {
  variable = 0;
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(variable);
  if(variable < 255){
    variable++;
  }else{
    Serial.println("Se ha llegado al limite de la variable");
  }

  Serial.println();
  delay(200); 
}
