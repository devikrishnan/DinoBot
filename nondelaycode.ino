#include "Arduino.h"
#include "SoftwareSerial.h"
#include<NoDelay.h>
#include "DFRobotDFPlayerMini.h"

unsigned long int cm = 0;
static const uint8_t PIN_MP3_TX = 2; // Connects to module's RX 
static const uint8_t PIN_MP3_RX = 3; // Connects to module's TX
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

DFRobotDFPlayerMini player;

int triggerPin = 7;
int echoPin = 6;
unsigned long currentTime;

unsigned long p0=0;
unsigned long p1=0;
unsigned long p6=0;


  int i=0;
  int closer=0;
  int dur[6]={13000,000,11000,4000,7000}; //duration of each audio recording
  int songs[6]={4,5,6,8,2}; //songs numbered according to mp3 player
  int play[6]={0,0,0,0,0};


long readUltrasonicDistance() {
         // Clear the trigger
        digitalWrite(triggerPin, LOW);
        delayMicroseconds(2);
        // Sets the trigger pin to HIGH state for 10 microseconds
        digitalWrite(triggerPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(triggerPin, LOW);
        // Reads the echo pin, and returns the sound wave travel time in microseconds
        return pulseIn(echoPin, HIGH);
}




void setup() {
 

  pinMode(triggerPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  i=0;
  closer=0;
  
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
  player.volume(5);  //Set volume value. From 0 to 30
  Serial.println(F("DF working"));
  
}




void loop() {
  
  cm = 0.01723 * readUltrasonicDistance(); 
  if(cm > 100 && cm<=500){
    currentTime=millis();
    if(currentTime - p0 > 8000)//Checks to see if set time has past
    {
      player.play(1);
      p0=currentTime;
      p1=0;
      p6=0;
      i=0;
    } 
  }

    


  else if(cm<=100 && cm>=20){
   
    currentTime=millis();
    int k = currentTime - p1 > dur[i];
   if(currentTime - p1 > dur[i] && play[i]==0)
    {  
      player.play(songs[i]);
      play[i]=1;
      closer=0;
      p1=currentTime;
      p0=0;
      p6=0;
      
    }

    else if(currentTime - p1 >= dur[i] && play[i]==1 && closer==0)
    { play[i]=0;
      if(i<= 4){
         i=i+1;
       }
      else{
        i=0;
      }
    }
  }

    else if(cm < 20){
    currentTime=millis();
    
    if(currentTime - p6 > 3000)
    {
      closer=1;
      player.play(3);
      p6=currentTime;
      p0=0;
      p1=0;
      play[i]=0;
    }
  }
}
