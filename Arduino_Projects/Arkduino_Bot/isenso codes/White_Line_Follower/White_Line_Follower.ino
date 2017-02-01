void setup()
{
pinMode(10,OUTPUT); //right
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);//left
pinMode(13,OUTPUT);
pinMode(3,INPUT); //right sensor          
pinMode(4,INPUT); //left sensor          
}

void loop()
{
int l = digitalRead(4);
int r = digitalRead(3);

if(l==HIGH && r==HIGH)
{
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}
else if(l==LOW && r==HIGH)
{
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
}
else if(r==LOW && l==HIGH)
{
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}
else
{
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
}
