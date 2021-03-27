#include "Arduino.h"
#include "SoftwareSerial.h"

#include "DFRobotDFPlayerMini.h"
// Use pins 2 and 3 to communicate with DFPlayer Mini
static const uint8_t PIN_MP3_TX = 2; // Connects to module's RX 
static const uint8_t PIN_MP3_RX = 3; // Connects to module's TX 
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

// Create the Player object
DFRobotDFPlayerMini player;



int distanceThreshold = 0;
int cm = 0;
int inches = 0;

//function for sensor reading
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  // Init USB serial port for debugging
  Serial.begin(9600);
  // Init serial port for DFPlayer Mini
  softwareSerial.begin(9600);
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));

  if (!player.begin(softwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }
  Serial.println(F("DFPlayer Mini online."));

  player.volume(20);  //Set volume value. From 0 to 30
  //player.play(1);
  Serial.println(F("DF working"));
}


void loop() {
  // put your main code here, to run repeatedly:
  distanceThreshold = 80;
  cm = 0.01723 * readUltrasonicDistance(7, 6);
  if (cm > distanceThreshold) {
    Serial.println(cm);    
  }
  if (cm <= distanceThreshold && cm > 40) {
    Serial.println(cm);
    player.play(1);
    delay(2000);
    
  }
  if (cm <= 40) {
    Serial.println(cm);
    player.play(3);
    delay(2000);
    
  }
  delay(3000); // Wait for 100 millisecond(s)
}
