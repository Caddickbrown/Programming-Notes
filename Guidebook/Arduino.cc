//Project 2: Spaceship Interface
//The following would flash lights in series when pressed - the green LED would stay on otherwise
int switchState = 0; //This sets the variable of "switchState" as 0
void setup() {
  //This code sets the pins up as either Inputs or Outputs - telling the board what to expect from them.
  pinMode (2, INPUT); // Push Switch - set as an input
  pinMode (3, OUTPUT); // green LED - set as an output
  pinMode (4, OUTPUT); // red LED - set as an output
  pinMode (5, OUTPUT); // red LED - set as an output
}

void loop() {
  switchState = digitalRead(2); //

if (switchState == LOW) { //if the button is not pressed
  digitalWrite(3, HIGH); // green LED - set to on
  digitalWrite(4, LOW); // red LED - set to off
  digitalWrite(5, LOW); // red LED - set to off
  }
else { //if the button is pressed - toggle the LEDs
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(250); //wait for a quarter of  second
  //toggle the LEDs
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(250); //wait for a quarter of  second
  }
} //go back to the beginning of the loop
