// Define the pins
int LDR_Pin = A0;  // LDR connected to Analog Pin A0
int LED_Pin = 9;    // LED connected to Digital Pin 9

void setup() {
  pinMode(LED_Pin, OUTPUT);  // Set LED pin as OUTPUT
  Serial.begin(9600);        // Start Serial Monitor for debugging
}

void loop() {
  int lightValue = analogRead(LDR_Pin); // Read the light level
  Serial.println(lightValue); // Print the value to Serial Monitor
  
  if (lightValue < 500) {  // Adjust this value based on your lighting condition
    digitalWrite(LED_Pin, HIGH);  // Turn LED ON in darkness
  } else {
    digitalWrite(LED_Pin, LOW);   // Turn LED OFF in brightness
  }

  delay(500); // Small delay to stabilize readings
}
