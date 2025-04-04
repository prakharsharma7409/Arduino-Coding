//analogRead code ex
//Potentiometer reading values
int analogPin = A3;// potentiometer wiper (middle terminal) connected to analog pin 3
int val = 0;
void setup(){
  Serial.begin(9600);
}
void loop(){
  analogRead(analogPin);
  Serial.println(val);
}
