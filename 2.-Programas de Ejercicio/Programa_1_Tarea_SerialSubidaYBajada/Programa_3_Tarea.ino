byte variable;
bool flag;

void setup() {
  variable =0;
  flag=true;  
  Serial.begin(9600);
}

void loop() {

  if(variable==0){
    flag=true;
    Serial.println("Se ha iniciado la variable en 0");
  }
  else if(variable==255){
    flag=false;
    Serial.println("Se ha llegado al limite de la variable en 255");
  }

  if(flag){
    variable++;
  }
  else{
    variable--;
  }
  
  Serial.println(variable);
  delay(50); 
}
