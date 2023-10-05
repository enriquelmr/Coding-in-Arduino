unsigned long time;
int a;

void setup(){
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(2,OUTPUT);
}
void loop(){
  Serial.print("Time: ");
  time = millis();

  Serial.println(time);    //prints time since program started
               // wait a second so as not to send massive amounts of data
  digitalRead(12)==HIGH;
}
