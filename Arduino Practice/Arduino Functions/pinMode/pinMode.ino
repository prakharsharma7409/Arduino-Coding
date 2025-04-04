#define button_Pin 12
#define led_Pin 13

void setup(){
  pinMode(button_Pin,INPUT_PULLUP);
  pinMode(led_Pin,OUTPUT);
}
void loop(){
  if(digitalRead(button_Pin) == LOW){
    digitalWrite(led_Pin,HIGH);
  }else{
    digitalWrite(led_Pin,LOW);
  }
}