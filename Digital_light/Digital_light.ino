
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11,HIGH);//yellow
delay(500);

digitalWrite(11,LOW);
delay(500);
digitalWrite(8,HIGH);//green
delay(1000);
digitalWrite(8,LOW);
delay(1000);
digitalWrite(7,HIGH);//red
digitalWrite(9,HIGH);//buzzer
delay(1500);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
delay(1500);
}
