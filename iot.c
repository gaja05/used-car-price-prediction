int red1=7;
int red2=4;
int green1=5;
int green2=2;
int yel1=6;
int yel2=3;
int sp=1500;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(red1,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(yel1,HIGH);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }

  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }
  digitalWrite(red1,LOW);
  digitalWrite(green1,HIGH);
  digitalWrite(yel1,LOW);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }
  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }
  digitalWrite(red1,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(yel1,LOW);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }
  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }




  
  digitalWrite(red2,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yel2,HIGH);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }
  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }
  digitalWrite(red2,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(yel2,LOW);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }
  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }
  digitalWrite(red2,HIGH);
  digitalWrite(green2,LOW);
  digitalWrite(yel2,LOW);
  delay(sp);
  while(digitalRead(A0)==LOW)
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    digitalWrite(yel1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yel2,LOW);
  }
  while(digitalRead(A1)==LOW)
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    digitalWrite(yel2,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(yel1,LOW);
  }
}
