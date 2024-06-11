/*
    Project name : Muscle Sensor EMG
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-muscle-sensor-emg
*/

const int muscleSensorPin = A0; // Analog pin connected to the muscle sensor
int sensorValue = 0;

void setup() {
  pinMode(muscleSensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog voltage from the muscle sensor
  sensorValue = analogRead(muscleSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Muscle Sensor Value: ");
  Serial.println(sensorValue);

  // Determine muscle activity based on sensor value
  if (sensorValue > 500) {
    Serial.println("Muscle activity detected!");
  } else {
    Serial.println("Muscle inactive");
  }

  delay(1000); // Add a small delay to avoid spamming the Serial Monitor
}
