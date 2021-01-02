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

//Project 3: "Love-o-meter"
//This project basically lights up LEDs dependent on temperature.
const int sensorPin = A0; //Set the variable for the sensor pin as A0. A0 is an Analog Pin - which is used when the input can vary on a scale - not just a yes or a no.
const float baselineTemp = 20.0; //This sets the "Baseline Temperature at 20.0

void setup() {
  Serial.begin(9600); //Open a Serial Port - this opens a connection with the computer so you can see the values from the analog input on the computer
  for (int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber, OUTPUT); //This sets the pin as an output
    digitalWrite(pinNumber, LOW);  //This outputs on each of the pins up until 5
  }
}
void loop() {
  int sensorVal = analogRead(sensorPin); //This reads what the sensor value is for sensor A0 (As defined earlier)
  Serial.print("Sensor Value: "); //This prints The sensor value through the serial port, ie. to the computer
  Serial.print(sensorVal);
  // convert ADC reading into voltage
  float voltage = (sensorVal/1024.0) * 5.0; //This is multiplied by 5 due to 5 Volts being the maximum Voltage within the circuit
  Serial.print(", Volts: ");
  Serial.print(voltage);
  // convert the voltage to temperature in degrees. The datasheet for this sensor says thatevery 10 millivolts of change accounts for 1 degree Celcuis. It also indicates that it can read temperatures below 0 degrees, so an offset of 0.5 needs to be added.
  Serial.print(", degrees C: ");
  float temperature = (voltage - .5) * 100; // Take away offset and multiply by 100 to get accurate temperature
  Serial.println(temperature); // This is a slightly different command. It prints the values on a new line and will help with readability.
  if(temperature < baselineTemp+2){ // If the temperature is between 20 and 22 then no lights will light up
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){ // && means "and". If the temperature is between 22 and 24 then one light will light up
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6){ // If the temperature is between 24 and 26 then two lights will light up
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }else if(temperature >= baselineTemp+6){ // If the temperature is above 26 then all three lights will light up
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(1); //This is just to allow the Analog to Digital Converter time to read the value
}
