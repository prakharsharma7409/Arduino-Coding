//Uart Protocol Ex 
//Sending and receving text 
void setup(){
  //start serial communication
  Serial.begin(9600);
}
void loop(){
  //send data/information
  Serial.println("Hello From Arduino 1");
  Serial.println("Hey i am Prakhar building a billion dollar startup");
  delay(1000);
}