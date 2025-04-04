//UART Protocol
//Receivers Code
void setup(){
  //serial communication start
  Serial.begin(9600);
}
void loop(){
  //check data is received or not 
  if(Serial.available()){
    String receivedData = Serial.readString();
    Serial.print("Received : ");
    Serial.println("receivedData");
  }
}