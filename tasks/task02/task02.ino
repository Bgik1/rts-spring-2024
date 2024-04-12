#include <TaskManagerIO.h>

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

int lamp1 = LOW; 
int lamp2 = LOW; 
int lamp3 = LOW; 
int lamp4 = LOW; 
int lamp5 = LOW; 

void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  
  taskid_t task1 = taskManager.scheduleFixedRate(period1, [] {
    if(lamp1==LOW) {
      lamp1=HIGH;  
    } else {
      lamp1=LOW;
    }  
	
     digitalWrite(pin1,lamp1);
  }, TIME_MICROS);
  
  taskid_t task2 = taskManager.scheduleFixedRate(period2, [] {
    if(lamp2==LOW) {
      lamp2=HIGH;  
    } else {
      lamp2=LOW;
    }   
	
    digitalWrite(pin2,lamp2);
  }, TIME_MICROS);
  
  taskid_t task3 = taskManager.scheduleFixedRate(period3, [] {
    if(lamp3==LOW) {
      lamp3=HIGH;  
    } else {
	  lamp3=LOW;
    }    
	
    digitalWrite(pin3,lamp3);
  }, TIME_MICROS);
  
  taskid_t task4 = taskManager.scheduleFixedRate(period4, [] {
    if(lamp4==LOW) {
      lamp4=HIGH;  
    } else {
      lamp4=LOW;
    }    
	
    digitalWrite(pin4,lamp4);
  }, TIME_MICROS);
  
  taskid_t task5 = taskManager.scheduleFixedRate(period5, [] {
    if(lamp5==LOW) {
      lamp5=HIGH;  
    } else {
      lamp5=LOW;
    }    
	
    digitalWrite(pin5,lamp5);
  }, TIME_MICROS);
}

void loop() {
   taskManager.runLoop();
}
