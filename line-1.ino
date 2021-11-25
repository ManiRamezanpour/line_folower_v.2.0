#include <EEPROM.h>

//DEFINING SENSORS
const int se1 = 4;
const int se2 = 10;
const int se3 = 2;
const int se4 = 11;
const int se5 = 5;
const int se6 = 12;
const int se7 = 9;
const int se8 = A1;
//DEFINING MOTOTS
int m1 = 3;
int m2 = 6;
int m3 = 7;
int m4 = 8;
//int count;
const int powerpin1 = 13;
const int powerpin2 = 12; 

void setup() {
  Serial.begin(9600);
  pinMode(se1, INPUT);
  pinMode(se2, INPUT);
  pinMode(se3, INPUT);
  pinMode(se4, INPUT);
  pinMode(se5, INPUT);
  pinMode(se6, INPUT);
  pinMode(se7, INPUT);
  pinMode(se8, INPUT);
  
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);

  pinMode(powerpin1, OUTPUT);
  pinMode(powerpin2, OUTPUT);
  digitalWrite(powerpin1, HIGH);
  digitalWrite(powerpin2, HIGH);
  
}


void loop() {
  
  const int s1 = digitalRead(se1);
  const int s2 = digitalRead(se2);
  const int s3 = digitalRead(se3);
  const int s4 = digitalRead(se4);
  const int s5 = digitalRead(se5);
  const int s6 = digitalRead(se6);
  const int s7 = digitalRead(se7);
  const int s8 = digitalRead(se8);

if(((s1==HIGH) && (s2==HIGH) &&(s3==LOW) &&(s4==HIGH) &&(s5==HIGH)&&(s6==LOW)&& (s7==HIGH) && (s8==HIGH))||((s1==HIGH) && (s2==LOW) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==LOW) && (s8==HIGH))||((s1==HIGH) && (s2==LOW) &&(s3==LOW) &&(s4==HIGH) &&(s5==HIGH)&&(s6==LOW)&& (s7==LOW) && (s8==HIGH))||((s1==HIGH) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==HIGH))||((s1==HIGH) && (s2==HIGH) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==HIGH) && (s8==HIGH))||((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==LOW) &&(s5==LOW)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==LOW))||((s1==LOW) && (s2==LOW) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==LOW) && (s8==LOW))||((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==HIGH) &&(s5==HIGH)&&(s6==LOW)&& (s7==LOW) && (s8==LOW)))
{
  //FORWARD
    Serial.println("FORWARD");
    digitalWrite(m2, HIGH); digitalWrite(m4, HIGH);
    digitalWrite(m1, LOW);digitalWrite(m3, LOW);     
}
else if(((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==LOW))|| ((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH)))
{
  //Special forward
    Serial.println(" SPCL FORWARD");
   digitalWrite(m2, HIGH); digitalWrite(m4, HIGH);
   digitalWrite(m1, LOW);digitalWrite(m3, LOW);
}
else if ( ((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==HIGH))||((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==LOW) &&(s3==LOW) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==LOW) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH))||((s1==LOW) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==HIGH)))
  { //sharp RIGHT
    digitalWrite(m2, HIGH);digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);digitalWrite(m1, LOW);
    
  }
else if ( ((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==HIGH) && (s8==LOW))||((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==HIGH)&& (s7==LOW) && (s8==LOW))||((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==HIGH)&&(s6==LOW)&& (s7==LOW) && (s8==LOW))||((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==HIGH) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==LOW))||((s1==HIGH) && (s2==HIGH) &&(s3==HIGH) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==LOW))||((s1==HIGH) && (s2==HIGH) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==LOW))||((s1==HIGH) && (s2==LOW) &&(s3==LOW) &&(s4==LOW) &&(s5==LOW)&&(s6==LOW)&& (s7==LOW) && (s8==LOW)))
 { //sharp LEFT
    digitalWrite(m4, HIGH);digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);digitalWrite(m3, LOW);
    
 }

 //Similarily write the conditions for turning left and right
else
{
  //STOP
  Serial.println("STOP");
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
}
}
