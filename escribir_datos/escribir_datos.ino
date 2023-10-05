#include<SD.h>
#include <TimeLib.h>
#include <Time.h>

int sensorPin = A0;    // select the input pin for the potentiometer
float sensorValue;  // variable to store the value coming from the sensor
time_t timett;


File archivo;
void setup() {
 Serial.begin(9600);
 analogReference(INTERNAL);
 setTime(20,35,0,27,9,2018);
 
 Serial.println("Iniciando el modilo SD");
 pinMode(10,OUTPUT);
 if(!SD.begin(10)){
  Serial.println("Fallo al arrancar");
  return 0;
  }
  Serial.println("A darle a la sd");
  archivo=SD.open("test.txt", FILE_WRITE);

  if (archivo){
    Serial.println("Escribiendo en test.txt");
    loop();
    archivo.close();
    Serial.println("el fin");
    }else{
      Serial.println("error al abrir test.txt"); 
      }
}


void loop() {
  sensorValue = analogRead(sensorPin);  
  timett = now();

  
  archivo.print("T=");
  archivo.print(sensorValue*1.1*100/1024);
  archivo.print("Time:");
  archivo.setCursor(0,2);
  archivo.print(hour());
  archivo.print(":");
  archivo.print(minute());
  archivo.print("\n");

}
