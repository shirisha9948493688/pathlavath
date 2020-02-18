#define trigpin 12
#define echopin 13

int led1 = 8;
int led2 = 7;
int led3 = 6;
int led4 = 5;
int led5 = 4;
int led6 = 3;
int led7 = 2;

int duration = 0;
int distance = 0;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);

  duration = pulseIn(echopin,HIGH);
  distance  = (duration/2)/28.5;
  Serial.println(distance);

  if(distance <= 7)
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }
  if(distance <= 14)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }
  if(distance <= 21)
  {
    digitalWrite(led3,HIGH);
  }
  else
  {
    digitalWrite(led3,LOW);
  }
  if(distance <= 28)
  {
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led4,LOW);
  }
  if(distance <= 35)
  {
    digitalWrite(led5,HIGH);
  }
  else
  {
    digitalWrite(led5,LOW);
  }
  if(distance <= 42)
  {
    digitalWrite(led6,HIGH);
  }
  else
  {
    digitalWrite(led6,LOW);
  }
  if(distance <= 49)
  {
    digitalWrite(led7,HIGH);
  }
  else
  {
    digitalWrite(led7,LOW);
  }
}

