int motorRPin1 = 3;
int motorRPin2 = 4;
int motorLPin1 = 5;
int motorLPin2 = 6;

void setup()
{
pinMode(motorRPin1,OUTPUT);
pinMode(motorRPin2,OUTPUT);

pinMode(motorLPin1,OUTPUT);
pinMode(motorLPin2,OUTPUT);
}
void loop()
{
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, HIGH);
     delay (3300);
  
     //--------------------------------------

     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, LOW);
     delay (475);

     //--------------------------------------
      
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, HIGH);
     delay (265);
  
     //--------------------------------------


     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, LOW);
     delay (475);
   
     //--------------------------------------
     
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, HIGH);
     delay (3400);  
     //--------------------------------------
      //--------------------------------------

     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorRPin1, HIGH);
     delay (425);

     //--------------------------------------
      
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, HIGH);
     delay (265);
  
     //--------------------------------------


     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorRPin1, HIGH);
     delay (475);
   
     //--------------------------------------
     
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorRPin1, HIGH);
     delay (3300);  
     //--------------------------------------
     
     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorRPin1, LOW);
     delay (8000);
  }
