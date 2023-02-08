int led5 = 13;
int led4 = 12;
int led3 = 11;
int led2 = 10;
int led1 = 9;
int gameMode = 0;
int sensorValue;
int prevSensorValue;
int blinkValue0 = 0;


void setup() {
Serial.begin(9600);  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(2,INPUT);
  
}

void loop() {
  sensorValue = digitalRead(2);
  Serial.println(sensorValue);
if(gameMode == 0){
lightBlink0();
}
if(sensorValue == 1 & gameMode == 0 & prevSensorValue == 0 & blinkValue0 == 1){
gameMode = 1; 

}
if(gameMode == 1){
digitalWrite(led1,HIGH);
}
if(gameMode == 1){
  lightBlink1();
}
prevSensorValue = digitalRead(2);
}
void lightBlink0(){
  digitalWrite(led1,HIGH);
delay(200);
digitalWrite(led1,LOW);
delay(1000);
}


void lightBlink1(){
  digitalWrite(led2,HIGH);
  blinkValue0 = 1;
 
delay(200);
digitalWrite(led2,LOW);
blinkValue0 = 0;
delay(1000);
  
  }
