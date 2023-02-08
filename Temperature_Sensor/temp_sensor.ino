
#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 10
int temp;

void setup(){
  Serial.begin(115200);
}

void loop(){
  DHT.read(DHT11_PIN);
  temp = DHT.temperature;
 temp = temp*9/5+32;
  Serial.print("temp:");
  Serial.print(temp);
  Serial.print("  humi:");
  Serial.println(DHT.humidity);
  delay(1000);
}
