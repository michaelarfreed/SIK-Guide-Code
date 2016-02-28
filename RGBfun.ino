/*
CONTROLLING A RGB LED
  Control a RGB LED with RGB pushbuttons.
  
Hardware connections:
  Starting at the flattened edge of the flange on the LED,
  the pins are ordered RED, COMMON, GREEN, BLUE.
  
  Connect RED to a 330 Ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 9.
  Connect COMMON pin to GND.
  Connect GREEN to a 330 Ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 10.
  Connect BLUE to a 330 Ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 11.

  Connect any pin on red pushbutton to ground (GND).
  Connect the oppositie diagonal pin of the pushbutton to digital pin 0.
  Connect any pin on green pushbutton to ground (GND).
  Connect the opposite diagonal pin of the pushbutton to the digital pin 1.
  Connect any pin on the blue pushbutton to ground (GND).
  Connect the opposite diagonal pin of the pushbutton to the digital pin 2.
*/


const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

const int RED_BUTTON = 0;
const int GREEN_BUTTON = 1;
const int BLUE_BUTTON = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_BUTTON, INPUT); // red push button
  pinMode(GREEN_BUTTON, INPUT); // green push button
  pinMode(BLUE_BUTTON, INPUT); // blue push button
  
  pinMode(RED_PIN, OUTPUT);  // red of RGB light
  pinMode(GREEN_PIN, OUTPUT);  // green of RGB light
  pinMode(BLUE_PIN, OUTPUT);  // blue of RGB light
  
}

void loop() {

  RGBread();
  // put your main code here, to run repeatedly:

}

void RGBread()
{
  int redState, greenState, blueState;
  
  redState = digitalRead(RED_BUTTON);
  greenState = digitalRead(GREEN_BUTTON);
  blueState = digitalRead(BLUE_BUTTON);

  if (redState == LOW)
  {
    digitalWrite(RED_PIN, HIGH);
  }
  else
  {
    digitalWrite(RED_PIN, LOW);
  }

  if (greenState == LOW)
  {
    digitalWrite(GREEN_PIN, HIGH);
  }
  else
  {
    digitalWrite(GREEN_PIN, LOW);
  }

  if (blueState == LOW)
  {
    digitalWrite(BLUE_PIN, HIGH);
  }
  else if (blueState == HIGH)
  {
    digitalWrite(BLUE_PIN, LOW);
  }

}
