int buzzPin = 8;
int potPin = A1;
int potVal;
int toneVal;

void setup() {
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);
Serial.begin(9600);
}

void loop() {
potVal = analogRead(potPin);
// Point Slope
toneVal = (9940./1023.) * potVal + 60;
digitalWrite(buzzPin, HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin, LOW);
delayMicroseconds(toneVal);
}
