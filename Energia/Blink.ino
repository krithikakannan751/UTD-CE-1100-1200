const int ledPin1 = 4;      
const int ledPin2 = 5;
const int ledPin3 = 6;
const int ledPin4 = 8;
const int ledPin5 = 9;
const int ledPin6 =10;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
     
}

void loop(){
  digitalWrite(ledPin1, HIGH); 
  delay(1000);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2, HIGH); 
  delay(1000);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3, HIGH); 
  delay(1000);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4, HIGH); 
  delay(1000);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5, HIGH); 
  delay(1000);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6, HIGH); 
  delay(1000);
  digitalWrite(ledPin6,LOW);
}
