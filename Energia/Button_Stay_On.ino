/*
  Button_Stay_On
  
  For the TI LaunchPad MSP-EXP430G2 
 
 This program uses no external hardware.  The Green LED on 
 the LaunchPad will turn on when the button is pressed and
 stay on until the button is pressed again, then it will turn
 off.  The LED is turned on or off by the button press.
 
 
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = PUSH2;     // the number of the pushbutton pin
const int ledPin =  GREEN_LED;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int on_off = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(ledPin, LOW);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW:
  if (buttonState == LOW) {     
    // turn LED on:
    if (on_off == 0) {    
    digitalWrite(ledPin, HIGH);
    on_off = 1;  
    } 
    else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    on_off = 0; 
    }
   }
   // This while loop pauses the program until the PUSH2 button is released
   while (buttonState == LOW) {
     buttonState = digitalRead(buttonPin);
   }
   delay(1);
}
