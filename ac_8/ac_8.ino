int led1 = 12;
int led2 = 13;

void setup()	
{		
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}	
void loop()	
{	
for (int i=0; i <= 8200; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(1000); 
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delayMicroseconds(10); 
digitalWrite(led2,LOW);
delay(0.01);	
}	
for (int i=0; i <= 500; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
delay(1);	
}
for (int i=0; i <= 500; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(1);	

}	
for (int i=0; i <= 470; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
delay(1);
}

for (int i=0; i <= 6400; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(1000); 
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delayMicroseconds(400); 
digitalWrite(led2,LOW);
delay(0.01);	
}	

for (int i=0; i <= 650; i++)	
{	
digitalWrite(led2,HIGH);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(1);	
}
for (int i=0; i <= 500; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(1);	

}	
for (int i=0; i <= 670; i++)	
{	
digitalWrite(led2,HIGH);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(1);
}

for (int i=0; i <= 8000; i++)	
{	
digitalWrite(led1,HIGH);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(0.01);	
}	
for (int i=0; i <= 7000; i++)	
{	
digitalWrite(led1,LOW);
delayMicroseconds(900); 
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
delayMicroseconds(300); 
digitalWrite(led2,LOW);
delay(0.5);	
}	

} 


