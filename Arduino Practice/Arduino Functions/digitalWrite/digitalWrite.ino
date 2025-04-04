//digtialWrite fn code example
//This code is for noramal led blinking for 1 sec on and off.
int pin = 13;
void setup(){
  pinMode(pin,OUTPUT);
}
void loop(){
  digitalWrite(pin,HIGH);
  delay(1000);//1 sec
  digitalWrite(pin,LOW);
  delay(1000);
}