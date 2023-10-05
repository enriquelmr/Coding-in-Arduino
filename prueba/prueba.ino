float lapso;                 //intervalo entre oprimir el boton consecutivamente
 float duration;              // duracion del pulso oprimido
 //int a;
 float vel;
 float pi=(2*3.14159*3600000);
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 //a=digitalRead(12);  // wait for a second
 duration = pulseIn(12, HIGH, 3000000);  // TIEMPO QUE PERMANECE PULSADo con un limite de 3 segundos
  lapso = pulseIn(12, LOW, 3000000);      // TIEMPO ENTRE TOQUE Y TOQUE  limitede 3 segundos
 vel=(lapso+duration);

    Serial.println("la velocidad angular es");
    Serial.println(vel); 
 
 //if(a==HIGH){digitalWrite(2, HIGH);}
  //if(a==LOW){digitalWrite(2, LOW); }
}
