
int sensorPin=A0;
unsigned long sensorValue=0;
float T;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
analogReference(INTERNAL);
}

void loop() {
  sensorValue=analogRead(sensorPin);
  T=21+(1.1*sensorValue*10)/1023;
   Serial.println(" la temperatura es");
    Serial.println(T); 
    delay(50);
}
