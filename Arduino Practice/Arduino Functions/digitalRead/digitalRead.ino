//digitalRead fn code example
//This Arduino program controls an LED using a pushbutton.
int ledPin = 13;
int inPin = 5;
int val = 0;
void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(inPin,INPUT);  

}
void loop(){
  val = digitalRead(inPin);
  digitalWrite(ledPin,val);
}