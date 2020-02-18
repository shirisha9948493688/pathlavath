int motion=2; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(motion,INPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor=digitalRead(motion);
if(sensor==HIGH)
{
  Serial.print("motion on");
  delay(1000);

}else
{
  Serial.print("motion off");
}
if(sensor == HIGH)
{
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
else
{digitalWrite(10,HIGH);
digitalWrite(11,LOW);
  
}
Serial.println();
delay(1000);
}
