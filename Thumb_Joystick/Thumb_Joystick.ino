/*
  Thumb Joystick demo v1.0
by:http://www.seeedstudio.com
 connect the module to J9(a) for using;
 */
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  int sensorValue1 = analogRead(27);
  int sensorValue2 = analogRead(28);
  Serial.print("The X and Y coordinate is:");
  Serial.print(sensorValue1, DEC);
  Serial.print(",");
  Serial.println(sensorValue2, DEC);
  Serial.println(" ");
  delay(200);
}
