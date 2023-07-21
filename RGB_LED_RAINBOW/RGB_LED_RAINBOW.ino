int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
  delay(100);
  setColor(255, 8, 0);//dim green LED to create Orange
  delay(100);
  setColor(255, 35, 0);
  delay(100);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,HIGH);
  delay(100);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  delay(100);
  setColor(30, 0, 200);//indigo Color Code
  delay(100);
  digitalWrite(redPin,HIGH);//mix red and blue
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  delay(100);
  
}

void setColor(int red, int green, int blue) //RGB Color Code Function
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}