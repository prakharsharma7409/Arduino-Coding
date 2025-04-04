//analogWrite Program ex
//This Arduino program controls the brightness of an LED using a potentiometer
int ledPin = 13;
int analogPin = A3;
int val = 0;
void setup(){
  pinMode(ledPin,OUTPUT);
}
void loop (){
  val = analogRead(analogPin);
  analogWrite(ledPin,val/4);

}