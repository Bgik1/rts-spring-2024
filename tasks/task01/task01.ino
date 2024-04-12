int pin1 = 3; 
int pin2 = 5; 
int pin3 = 6; 
int pin4 = 9; 
int pin5 = 10; 
 
unsigned long period1 = 10000; 
unsigned long period2 = 1000; 
unsigned long period3 = 500; 
unsigned long period4 = 100; 
unsigned long period5 = 50; 
 
unsigned long micros1 = 0; 
unsigned long micros2 = 0; 
unsigned long micros3 = 0; 
unsigned long micros4 = 0; 
unsigned long micros5 = 0; 
 
int lamp1 = LOW; 
int lamp2 = LOW; 
int lamp3 = LOW; 
int lamp4 = LOW; 
int lamp5 = LOW; 
 
void setup() { 
  pinMode(pin1, OUTPUT); 
  pinMode(pin2, OUTPUT); 
  pinMode(pin3, OUTPUT); 
  pinMode(pin4, OUTPUT); 
  pinMode(pin5, OUTPUT); 
} 
 
void loop() { 
  unsigned long currentMicros = micros(); 
 
  if (currentMicros - micros1 >= period1) { 
    micros1 = currentMicros; 
     
    if (lamp1 == LOW) { 
      lamp1 = HIGH; 
      digitalWrite(pin1, lamp1); 
    } else { 
      lamp1 = LOW; 
      digitalWrite(pin1, lamp1); 
    } 
  } 
 
  if (currentMicros - micros2 >= period2) { 
    micros2 = currentMicros; 
     
    if (lamp2 == LOW) { 
      lamp2 = HIGH; 
      digitalWrite(pin2, lamp2); 
    } else { 
      lamp2 = LOW; 
      digitalWrite(pin2, lamp2); 
    } 
  } 
 
  if (currentMicros - micros3 >= period3) { 
    micros3 = currentMicros; 
     
    if (lamp3 == LOW) { 
      lamp3 = HIGH; 
      digitalWrite(pin3, lamp3); 
    } else { 
      lamp3 = LOW; 
      digitalWrite(pin3, lamp3); 
    } 
  } 
 
  if (currentMicros - micros4 >= period4) { 
    micros4 = currentMicros; 
     
    if (lamp4 == LOW) { 
      lamp4 = HIGH; 
      digitalWrite(pin4, lamp4); 
    } else { 
      lamp4 = LOW; 
      digitalWrite(pin4, lamp4); 
    } 
  } 
 
  if (currentMicros - micros5 >= period5) { 
    micros5 = currentMicros; 
     
    if (lamp5 == LOW) { 
      lamp5 = HIGH; 
      digitalWrite(pin5, lamp5); 
    } else { 
      lamp5 = LOW; 
      digitalWrite(pin5, lamp5); 
    } 
  } 
}
