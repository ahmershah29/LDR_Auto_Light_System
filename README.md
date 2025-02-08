# LDR Auto Light System  

## Overview  
This project is an Arduino-based automatic lighting system using an LDR (Light Dependent Resistor). It detects the surrounding light levels and automatically turns an LED on or off depending on the brightness.  

## Components Required  
- Arduino Board  
- LDR Sensor  
- LED  
- Resistor (10kΩ for LDR, 220Ω for LED)  
- Jumper Wires  

## How It Works  
1. The LDR reads ambient light levels.  
2. If the light level is below a certain threshold, the LED turns ON.  
3. If the light level is above the threshold, the LED turns OFF.  

## Code Explanation  
- **LDR_Pin (A0):** Reads light intensity.  
- **LED_Pin (9):** Controls LED state.  
- **Threshold (500):** Adjusts sensitivity to light.  

How to Use:
1.Connect the components as per the circuit diagram.
2. Upload the given code to the Arduino.
3. Open the Serial Monitor to observe real-time light intensity readings.
4. The LED will turn ON in the dark and OFF in bright light.

Applications:
1. Automatic night lamps
2. Street lighting systems
3. Home automation


```cpp
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
