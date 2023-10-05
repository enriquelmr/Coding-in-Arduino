#include <SoftwareSerial.h>
//#include <TimeLib.h>
#include <Time.h>

SoftwareSerial mySerial(10, 11); // RX, TX
int incomingByte=0;

int sensorPin = A0;    // select the input pin for the potentiometer
float sensorValue;  // variable to store the value coming from the sensor
int estado=LOW;

void setup() {
  // Open serial communications and wait for port to open:
  analogReference(INTERNAL);
  Serial.begin(9600);
 // setTime(20,35,0,27,9,2018);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
 // mySerial.println("Hello?");
}

void loop() { // run over and over
 
  sensorValue = analogRead(sensorPin); 

  mySerial.print("T=");
    mySerial.println(sensorValue*110/1024);
    delay(1000);
  if (mySerial.available()>0) {
    Serial.write(mySerial.read());
     incomingByte= mySerial.read();
     Serial.println(incomingByte);
   
     if (char(incomingByte) == '1'){
     //mySerial.println("hola"); 
     Serial.println("holoa");
  }
 
  }
 
 /* if (Serial.available()) {
    
    mySerial.write(Serial.read());
  }*/
}
