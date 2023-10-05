/*----------------------------Equipo 4
Integrantes: Pablo Hernandez Munguia, Jose Plata Salas, Luis Enrique Martinez

  Este programa mide la velocidad de un fidget spinner
 
    Circuito:
  - foto transistor de +5V a una resistencia de 10 kohm a tierra (GND) y por otro lado al pin 12
  - +5V a una resistencia de 470 ohm al LED del fototransistor a GND
  - resistencia de 470 ohm del pin 2 a un LED  y este a GND
*/

//Le asignamos valores constantes a los pines que utilizamos
const int  sensorPin = 12;    
const int ledPin = 2;

int Count = 0;   // Contador de las veces que se ha presionado el boton
int State = 0;         // Estado actual del boton
int lastState = 0; // Estado anterior del boton

unsigned long Time;
unsigned long lastTime=0;
unsigned long time2;
unsigned long laps;

void setup() {
  pinMode(sensorPin, INPUT); // Inicializa el fototransistor como entrada
  pinMode(ledPin, OUTPUT); // Inicializa el LED como salida
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the input state:
  State = digitalRead(sensorPin);

  // compare the State to its previous state
  if (State != lastState) {
    // if the state has changed, increment the counter
    if (State == HIGH) {
      // if the current state is HIGH then the sensor went from off to on:
      Count++;
      //Serial.println("\n on");
      //Serial.print("Veces que ha pasado un brazo del spinner: ");
      //Serial.println(Count);
      Time = millis();
      //Serial.print("Time1: ");
      //Serial.println(Time);
      laps = Time - lastTime;
      Serial.print("\nLapse: ");
      Serial.println(laps);
    }
    else {
      // if the current state is LOW then the sensor went from on to off:
      //Serial.println("off");
      time2 = millis();
      //Serial.print("Time2: ");
      //Serial.println(time2);

    }
  }
  // save the current state as the last state, for next time through the loop
  lastState = State;
  lastTime = Time;
  
  // turns on the LED cada que pasa un brazo
  if (Count % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

}
