/*
 Blink_Red_Green_Stay_On
 
 This program is set to use the push button on the LaunchPad to activate blinking of the 
 red and green LEDs on the LaunchPad.  They will stay blinking until the button is pressed
 again, and then they will turn off.  Pressing the button again will turn the blinking back 
 on and so on.
 
 Written by James M. Florence for EE1100 at UT Dallas
 
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 11;     // the PUSH2 button is connected to pin 5
const int RedLED =  4;      // the Red LED is connected to pin 2
const int GreenLED =  5;      // the Green LED is connected to pin 14

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int on_off = 0;
int count = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, LOW);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, switch the on_off variable to the opposite state
  if (buttonState == LOW) {     

    if (on_off == 0) {    
    on_off = 1;  
    } 
    else {
    on_off = 0; 
    }
  }   
   // this will pause the program while the button is still pressed
   while (buttonState == LOW) {
     buttonState = digitalRead(buttonPin);
   }
   delay(1);

   if (on_off == 1) {
    digitalWrite(RedLED, HIGH);
    digitalWrite(GreenLED, LOW);
//  This produces a delay of 200 milliseconds that can be intrupted by a button press
    count = 0;
 while (count < 200) {
      delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == LOW) {
      on_off = 0;
      goto end_blink;
    }
    count++;
    }
    
    digitalWrite(RedLED, LOW);
    digitalWrite(GreenLED, HIGH);
//  This produces a delay of 200 milliseconds that can be intrupted by a button press
    count = 0;
 while (count < 200) {
      delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == LOW) {
      on_off = 0;
      goto end_blink;
    }
    count++;
    }
   }
   else {
    digitalWrite(RedLED, LOW);
    digitalWrite(GreenLED, LOW);
   }

end_blink:
   // this is pause the program while the button is still pressed
   while (buttonState == LOW) {
     buttonState = digitalRead(buttonPin);
   }
   delay(1);
}
