//RIGHT MOTOR
int rm1=5;                      //in pin 1 of right motor to pin 5
int rm2=6;                      //in pin 2 of right motor to pin 6

//LEFT MOTOR
int lm1=9;                      //in pin 1 of left motor to pin 9
int lm2=10;                     //in pin 2 of left motor to pin 10

int left=13;                    //input from left IR sensor to be taken in pin 13
int right=12;                    //input from right IR sensor to be taken in pin 12

void setup() {
  // put your setup code here, to run once:
  //Setting motor pins eto OUTPUT
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);

  //Setting the IR connected pins for input
  pinMode(left,INPUT);
  pinMode(right,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //For the robot to move forward
  if(digitalRead(left) && digitalRead(right));
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }

  //For the robot to move right
  if(!(digitalRead(left)) && digitalRead(right));
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }

  //For the robot to move left
  if(digitalRead(left) && !(digitalRead(right)));
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }

  //For the robot to STOP
  if(!(digitalRead(left)) && !(digitalRead(right)));
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }

}
