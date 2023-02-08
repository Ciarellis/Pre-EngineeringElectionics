int sensorPin = A2;    
int ledPin = 13;
int sensorValue = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
 pinMode(ledPin,OUTPUT);
 pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
   // digitalWrite(ledPin, HIGH);
  // turn the ledPin on
 
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  // turn the ledPin off:

  delay(sensorValue);
}
