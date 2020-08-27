void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    unsigned char cmd = Serial.read();
    if(cmd == '1')
    {
      digitalWrite(8,HIGH);
    }
    else if(cmd == '2')
    {
      digitalWrite(8,LOW);
    }
    else if(cmd == '3')
    {
      digitalWrite(9,HIGH);
    }
    else if(cmd == '4')
    {
      digitalWrite(9,LOW);
    }
    else if(cmd == '5')
    {
      digitalWrite(10,HIGH);
    }
    else if(cmd == '6')
    {
      digitalWrite(10,LOW);
    }
    else if(cmd == '7')
    {
      digitalWrite(11,HIGH);
    }
    else if(cmd == '8')
    {
      digitalWrite(11,LOW);
    }

  }

}
