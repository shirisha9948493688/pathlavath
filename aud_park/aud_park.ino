#include <SoftwareSerial.h>
SoftwareSerial nodemcu(2,3);
int parking1_slot1_ir_s = 4;
int parking1_slot2_ir_s = 5;

int parking2_slot1_ir_s = 6;

String sensor1;
String sensor2;
String sensor3;

String cdata="";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
nodemcu.begin(9600);

pinMode(parking1_slot1_ir_s,INPUT);
pinMode(parking1_slot2_ir_s,INPUT);

pinMode(parking2_slot1_ir_s,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
p1slot1();
p1slot2();

p2slot1();

cdata = cdata + sensor1 +"," + sensor2 +"," + sensor3 +",";
Serial.println(cdata);
nodemcu.println(cdata);
delay(6000);
cdata = "";
digitalWrite(parking1_slot1_ir_s,HIGH);
digitalWrite(parking1_slot2_ir_s,HIGH);

digitalWrite(parking2_slot1_ir_s,HIGH);
}

void p1slot1()  //parking1 slot1
{
  if(digitalRead(parking1_slot1_ir_s) == LOW)
  {
    sensor1 = "255";
    delay(200);
  }
 if(digitalRead(parking1_slot1_ir_s) == HIGH)
  {
    sensor1 = "0";
    delay(200);
  }
}

void p1slot2()  //parking1 slot2
{
  if(digitalRead(parking1_slot2_ir_s) == LOW)
  {
    sensor2 = "255";
    delay(200);
  }
 if(digitalRead(parking1_slot2_ir_s) == HIGH)
  {
    sensor2 = "0";
    delay(200);
  }
}

void p2slot1()  //parking2 slot1
{
  if(digitalRead(parking2_slot1_ir_s) == LOW)
  {
    sensor3 = "255";
    delay(200);
  }
 if(digitalRead(parking2_slot1_ir_s) == HIGH)
  {
    sensor3 = "0";
    delay(200);
  }
}















