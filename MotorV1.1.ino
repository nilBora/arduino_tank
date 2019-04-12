
int IN1 = 2; // Input3 подключен к выводу 5 
int IN2 = 3;
int IN3 = 5; // Input3 подключен к выводу 5 
int IN4 = 6;

int ENA = 9;
int ENB = 10;

void setup()
{
  Serial.begin(9600);
   pinMode (IN4, OUTPUT);
   pinMode (IN3, OUTPUT);
   pinMode (IN2, OUTPUT);
   pinMode (IN1, OUTPUT);

   digitalWrite(IN1, LOW);
   digitalWrite(IN2, LOW);
   digitalWrite(IN4, LOW);
   digitalWrite(IN3, LOW);
}
void loop()
{
  if (Serial.available()) {
    char c = Serial.read();
    Serial.println(c);
    switch(c) {
      case '0': stopTank();
        break;
       case '1': upTank();
        break;
       case '2': downTank();
        break;
       case '3': leftTank();
        break;
       case '4': rightTank();
        break;
    }
  }
}

void stopTank()
{
   digitalWrite(IN1, LOW);
   digitalWrite(IN2, LOW);
   digitalWrite(IN4, LOW);
   digitalWrite(IN3, LOW);
}

void upTank()
{
    digitalWrite (IN2, HIGH); 
    digitalWrite (IN1, LOW);  
    
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, HIGH);
}

void downTank()
{
   digitalWrite (IN2, LOW); 
   digitalWrite (IN1, HIGH);  
     
   digitalWrite (IN4, HIGH);
   digitalWrite (IN3, LOW); 
}

void leftTank()
{
   digitalWrite (IN2, LOW); 
   digitalWrite (IN1, LOW);  
    
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, HIGH);
}

void rightTank()
{
   digitalWrite (IN2, HIGH); 
   digitalWrite (IN1, LOW);  
    
   digitalWrite (IN4, LOW);
   digitalWrite (IN3, LOW);
}
