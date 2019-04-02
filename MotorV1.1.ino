// Тестировалось на Arduino IDE 1.0.5
int IN1 = 2; // Input3 подключен к выводу 5 
int IN2 = 3;
int IN3 = 5; // Input3 подключен к выводу 5 
int IN4 = 6;

int ENA = 9;
int ENB = 10;

int LED_RADIO_A = 13;
int LED_RADIO_B = 12;
int LED_RADIO_C = 8;
int LED_RADIO_D = 7;

void setup()
{
  pinMode (IN4, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN1, OUTPUT);

  //pinMode (ENA, OUTPUT);
  //pinMode (ENB, OUTPUT);
  
  pinMode(LED_RADIO_A, INPUT);
 // analogWrite(ENA, 255); 
 // analogWrite(ENB, 255);
}
void loop()
{ 
  if (digitalRead(LED_RADIO_A)) {
    digitalWrite (IN2, HIGH); 
    digitalWrite (IN1, LOW);  
    
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, HIGH); 
    
  } else if (digitalRead(LED_RADIO_B)) {
    digitalWrite (IN2, HIGH); 
    digitalWrite (IN1, LOW);  
    
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, LOW);
  } else if (digitalRead(LED_RADIO_C)) {
    digitalWrite (IN2, LOW); 
    digitalWrite (IN1, LOW);  
    
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, HIGH);
  } else if (digitalRead(LED_RADIO_D)) {
     digitalWrite (IN2, LOW); 
     digitalWrite (IN1, HIGH);  
     
     digitalWrite (IN4, HIGH);
     digitalWrite (IN3, LOW); 
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, LOW);
  }
 
}
