//segunda prueba de generacion de tonos 
//--ALARMA DESPERTADOR--

int pin = 11;
int frecuencia = 800;
int duracion = 2500;

void setup(){
  
}
void loop(){
  tone(pin,frecuencia,duracion);
  delay(300);
  noTone(11);
  delay(300);
}
