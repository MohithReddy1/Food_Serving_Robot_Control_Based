//Food Serving Robot
void setup() {
pinMode (2,INPUT);
pinMode (3,INPUT);
pinMode (4,INPUT);
pinMode (5,INPUT);
pinMode (6,OUTPUT);
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
//pinMode (10,OUTPUT);
//pinMode (11,OUTPUT);
}
void loop() {
//Head Rotation
if (digitalRead(2)==HIGH&&digitalRead(5)==HIGH)
{
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
}
else if (digitalRead(3)==HIGH&&digitalRead(4)==HIGH)
{
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
   }
//Bot Directions
else  if (digitalRead(2)==HIGH)
{
    digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
}
else if (digitalRead(3)==HIGH)
{
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
}
else if (digitalRead(4)==HIGH)
{
    digitalWrite(6,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
}
else if (digitalRead(5)==HIGH)
{
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
}
//Stop
else
{
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
}
}
