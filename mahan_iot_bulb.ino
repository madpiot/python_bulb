/*******************************************
 * TARGET       : IoT Controlled Bulbs
 * PROGRAMMER   : Madhu Parvathaneni
 * HARDWARE     : Rabbani Basha
 * INPUT        : Internet (Serial)
 * OUTPUT       : Bulb
 * DATE         : 25th November 2018
 *******************************************/
int bulb_red=2;
int bulb_green=3;

#define off HIGH
#define on LOW

void setup() 
{
  Serial.begin(9600);
  Serial.println("WELCOME TO IoT Controlled Bulb");
  pinMode(bulb_red,OUTPUT);
  pinMode(bulb_green,OUTPUT);
  digitalWrite(bulb_red,off);
  digitalWrite(bulb_green,off);
}

void loop() 
{
  while(!Serial.available());
  while(Serial.available())
  {
    char ch=Serial.read();
    if(ch=='A' || ch=='a')
    {
      digitalWrite(bulb_red,on);
      Serial.println("You are requested to make RED BULB ON");
    }
      
    else if(ch=='B' || ch=='b')
    {
      digitalWrite(bulb_red,off);
      Serial.println("You are requested to make RED BULB OFF");
    }
    
    else if(ch=='C' || ch=='c')
    {
      digitalWrite(bulb_green,on);
      Serial.println("You are requested to make GREEN BULB ON");
    }
    else if(ch=='D' || ch=='d')
    {
      digitalWrite(bulb_green,off);
      Serial.println("You are requested to make GREEN BULB OFF");
    }
  }
}
