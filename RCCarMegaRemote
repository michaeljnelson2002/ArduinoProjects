#include <IRremote.hpp>
int IRPIN = 35;
int IN1 = 24;
int IN2 = 26;
int IN3 = 28;
int IN4 = 30;
int EN1 = 6;
int EN2 = 7;
int REDLED = 9;
  // VIN pin on driver, right power pin, connected to VIN on arduino
  // GND pin on driver, middle pin, to GND supply and GND arduino
  // +12V pin on driver, left power pin, connected to supply
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IrReceiver.begin(IRPIN, ENABLE_LED_FEEDBACK);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(EN1, OUTPUT);
pinMode(EN2, OUTPUT);
pinMode(REDLED, OUTPUT);
digitalWrite(EN1, HIGH);
digitalWrite(EN2, HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
if(IrReceiver.decode()) {
  (IrReceiver.decodedIRData.decodedRawData,HEX);
  Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
  IrReceiver.printIRSendUsage(&Serial);
    
if(IrReceiver.decodedIRData.decodedRawData == 0xF30CFF00) {
digitalWrite(REDLED, HIGH);
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}
else if(IrReceiver.decodedIRData.decodedRawData == 0xF708FF00) {
digitalWrite(REDLED, LOW);
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}
    IrReceiver.resume();
}
}
