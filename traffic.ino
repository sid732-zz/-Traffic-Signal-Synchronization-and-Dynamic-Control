int IRSensor = 2; // connect ir sensor to arduino pin 2
int IRSensor1 = 3;
int IRSensor2 = 4;
int IRSensor3 = 5;

int R1 = 6;
int G1 = 7;
int R2 = 8; // conect Led to arduino pin 13
int G2 =  9;// connect led to arduiono pin 9



int R3 = 10;
int G3=11;//connect led to arduion pin
int R4=12;
int G4=13;



void setup() 
{



  //pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (R1, OUTPUT); // Led pin OUTPUT
  pinMode (G1, OUTPUT);
  pinMode (R2, OUTPUT);
  pinMode (G2, OUTPUT);

  pinMode (R3, OUTPUT); // Led pin OUTPUT
  pinMode (G3, OUTPUT);
  pinMode (R4, OUTPUT);
  pinMode (G4, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  int statusSensor1 = digitalRead(IRSensor1);
  int statusSensor2 = digitalRead(IRSensor2);
  int statusSensor3 = digitalRead(IRSensor3);
  
  if (statusSensor2 == 0 && statusSensor3 == 0)
  {
   // delay(1200);
    digitalWrite(G2, HIGH);// LED LOW
    
    digitalWrite(G1, LOW);
  digitalWrite(R2, LOW);
    digitalWrite(R1, HIGH);

    digitalWrite(G4, HIGH);// LED LOW
    
    digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
    digitalWrite(R3, HIGH);
    
    delay(20000);

    digitalWrite(G2, LOW);
    digitalWrite(R2, HIGH);
    digitalWrite(G4, LOW);
    digitalWrite(R4, HIGH);

      digitalWrite(G4, HIGH);// LED LOW
    
    digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
    digitalWrite(R3, HIGH);
    digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
    digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    
     if(digitalRead(G1 == HIGH))
     {
        
        
        digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    
    delay(8000);
    digitalWrite(G3,HIGH);
    digitalWrite(R3,LOW);
    
    digitalWrite(G4,LOW);
    digitalWrite(R4,HIGH);
      
    delay(8000);
      
     }
  
  }
  
  
  else if (statusSensor == 0)
  {
     // delay(1200);
     digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
     if(digitalRead(G1 == HIGH))
     {
        
        digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    delay(8000);
    digitalWrite(G3,HIGH);
        digitalWrite(R3,LOW);

    digitalWrite(G4,LOW);
    digitalWrite(R4,HIGH);
      
    delay(8000);
    digitalWrite(G2, HIGH);
    digitalWrite(R2, LOW);
    digitalWrite(R1, HIGH);
    digitalWrite(G1, LOW);
    
    delay(8000);
    digitalWrite(R4, LOW);
    if(digitalRead(G2 == HIGH))
    {
      
        digitalWrite(G2, HIGH);
        digitalWrite(R2, LOW);
        digitalWrite(R1, HIGH);
        digitalWrite(G1, LOW);
        digitalWrite(G4,HIGH);
        digitalWrite(G3,LOW);
        digitalWrite(R3,HIGH);
        delay(8000);
    }
    
  }
   
   
  }

  else if (statusSensor2 == 0)
  {
  //  delay(1200);
    digitalWrite(G2, HIGH);// LED LOW
    
    digitalWrite(G1, LOW);
  digitalWrite(R2, LOW);
    digitalWrite(R1, HIGH);

    digitalWrite(G4, HIGH);// LED LOW
    
    digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
    digitalWrite(R3, HIGH);
    
    delay(16000);

    digitalWrite(G2, LOW);
    digitalWrite(R2, HIGH);
    digitalWrite(G4, LOW);
    digitalWrite(R4, HIGH);

      digitalWrite(G4, HIGH);// LED LOW
    
    digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
    digitalWrite(R3, HIGH);
    digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
    digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    
     if(digitalRead(G1 == HIGH))
     {
        
        
        digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    
    delay(8000);
    digitalWrite(G3,HIGH);
    digitalWrite(R3,LOW);
    
    digitalWrite(G4,LOW);
    digitalWrite(R4,HIGH);
      
    delay(8000);
     }
  
  }

  
  
  
 else if (statusSensor == 0 && statusSensor1 == 0 && statusSensor2 == 1 && statusSensor3 == 1)
  {
                    
    
       // delay(1200);
       

    digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
     if(digitalRead(G1 == HIGH))
     {
        digitalWrite(G1, HIGH);// LED LOW
    
    digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
   // delay(8000);
    digitalWrite(G3,HIGH);
    digitalWrite(G4,LOW);
    digitalWrite(R4,HIGH);
      
    delay(12000);
    
    digitalWrite(G2, HIGH);
    digitalWrite(R2, LOW);
    digitalWrite(R1, HIGH);
    digitalWrite(G1, LOW);
    
    delay(8000);
    digitalWrite(R4, LOW);
    if(digitalRead(G2 == HIGH))
    {
        digitalWrite(G2, HIGH);
        digitalWrite(R2, LOW);
        digitalWrite(R1, HIGH);
        digitalWrite(G1, LOW);
        digitalWrite(G4,HIGH);
        digitalWrite(G3,LOW);
        digitalWrite(R3,HIGH);
        delay(16000);
    }
        digitalWrite(R3,LOW);

  }
  }
  
   
  
 
  else //if(statusSensor == 1 && statusSensor1 == 1)
  {
    

    digitalWrite(R1, HIGH);
    digitalWrite(R2, HIGH);// LED High
    digitalWrite(G1, LOW);
    digitalWrite(G2, LOW);
    digitalWrite(G3, HIGH);
    digitalWrite(G4, HIGH);// LED High
    digitalWrite(R4,LOW);
    digitalWrite(R3,LOW);

    if(digitalRead(R1==HIGH) && digitalRead(R2==HIGH))
    {
      digitalWrite(G3,HIGH);
      digitalWrite(R4,HIGH);
      digitalWrite(R3,LOW);
      digitalWrite(G4,LOW);
      delay(3500);

      digitalWrite(G4,HIGH);
      digitalWrite(R3,HIGH);
      digitalWrite(R4,LOW);
      digitalWrite(G3,LOW);
      delay(3500);
      }

    }
   
  
}
