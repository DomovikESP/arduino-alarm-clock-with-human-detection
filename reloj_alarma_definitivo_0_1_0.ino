#include <Wire.h>
#include <RTC.h>
RTC rtc(DST_ON);
int pLED = 12;
int horaAlarma =  8;
int minutosAlarma = 10;
int FSR_Pin = A0;
int pin = 11;
int frecuencia = 800;
int duracion = 2500;

unsigned long tiempo; //no entiendo para que sirve esta linea
int horas;
int minutos;

void setup()
{
   pinMode( pLED, OUTPUT );
   Serial.begin( 9600 );
   while( !Serial );
   Serial.println( "Alarma iniciada\r\n" );
   delay( 100 );
}

void loop()
{
   int FSRReading = analogRead(FSR_Pin);
   Serial.println(FSRReading);
   Data d = rtc.getData();
   if( d.seconds >= 00 && d.hour24h == horaAlarma && d.minutes >= minutosAlarma && FSRReading > 10 )
   {
      Serial.print( "PiPiPi! (" ); Serial.print( millis() ); Serial.println( ")" );
      while(FSRReading > 10){
       int FSRReading = analogRead(FSR_Pin);
       digitalWrite( pLED, HIGH );
       tone(pin,frecuencia,duracion);
       delay(300);
       noTone(11);
       delay(300);
       Serial.println(FSRReading);
       while(FSRReading < 10){
         digitalWrite( pLED, LOW );
         noTone(11);
       }
      }
    }
}
