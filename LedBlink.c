// LED blink program for ESP32 using Arduino IDE

int Led_pin =2;
bool status = false;
void setup(){
  pinMode(Led_pin, OUTPUT);
}
void loop(){
  status = !status;
  digitalWrite(Led_pin,status);
  delay(200);
}
