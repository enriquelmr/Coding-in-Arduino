
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  e();
  ele();
  b();
  a();
  ere();
  te();
  o();
}
void e(){
   punto();
}
void ele(){
  punto();
  barra();
  }
void b(){
  barra();
  for(int i=0;i<3;i++){
    punto();
    }
    }
void a(){
  punto();
  barra();
  }
 void ere(){
  punto();
  barra();
  punto();}
void te(){
  barra();}
void o(){
  for(int i=0; i<3;i++){
    barra();
    }}
void punto(){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200); 
}
void barra(){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200); 
}
void le(){
  digitalWrite(LED_BUILTIN,LOW);
  delay(600);
  }

void pa(){
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  }

