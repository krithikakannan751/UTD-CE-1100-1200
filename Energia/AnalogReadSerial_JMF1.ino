// Program to read the voltage on pin 12 with analogRead(12)
// and print that value to the Serial Monitor

int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // This sets the BAUD rate for the serial communication
}

void loop() {
  // put your main code here, to run repeatedly: 
  sensorValue = analogRead(12); // read the voltage level on pin 12
  delay(10);
  Serial.print("sensorValue = " );
  Serial.println(sensorValue);      // Print the value to the Serial Monitor
  delay(500);
  
}
