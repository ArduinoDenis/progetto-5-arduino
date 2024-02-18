int Ledpin = 9; // The pin to which the LED is connected

void setup() {
  pinMode(Ledpin, OUTPUT); // Set the pin as an output
}

void loop() {
  digitalWrite(Ledpin, HIGH); // Turn on the LED
  delay(analogRead(0)); // Wait for the value read from analog pin 0
  digitalWrite(Ledpin, LOW); // Turn off the LED
  delay(analogRead(0)); // Wait again for the time read from analog pin 0
}
