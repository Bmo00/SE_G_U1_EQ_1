int led=3;
int pot=A0;

void setup() {
  // put your setup code here, to run once:

}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor=analogRead(pot);
  //Opcion 1 map
  //Opcion 2 logica
  valor=valor/4;

  analogWrite(led,valor);
}
