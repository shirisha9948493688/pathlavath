#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<SoftwareSerial.h>
#include <SimpleTimer.h>

char auth[] = "";
char ssid[] = "";
char pass[] = "";

SimpleTimer timer;

String myString;
char rdata;

int firstVal, secondVal, thirdVal;   //sensors
int led1,led2,led3;


void myTimerEvent()
{
  Blynk.virtualWrite(V1, millis() / 1000);
}


void seup()
{
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  
  timer.setInterval(1000L,sensorvalue1);
  timer.setInterval(1000L,sensorvalue2);
  timer.setInterval(1000L,sensorvalue3);
}

void loop()
{
  if(Sderial.available() == 0)
  {
    Blynk.run();
    timer.run();
  }
  if(Serial.avilable() > 0 )
  {
    rdata = Serial.read();
    myString = myString+ rdata;
    if( rdata == '\n')
    {
      Serial.println(myString);
      String l = getValue(myString " , ", 0);
      String m = getValue(myString " , ", 1);
      String n = getValue(myString " , ", 2);
      String o = getValue(myString " , ", 3);
      String p = getValue(myString " , ", 4);
      String q = getValue(myString " , ", 5);

      led1 = l.toInt();
      led2 = m.toInt();
      led3 = n.toInt();
      led4 = o.toInt();
      led5 = p.toInt();
      led6 = q.toInt();
      
    }
  }
}



