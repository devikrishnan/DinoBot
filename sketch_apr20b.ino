#include "DFRobotDFPlayerMini.h"
DFRobotDFPlayerMini player;
#include "LedControl.h"

LedControl lc=LedControl(28,30,32,2);

const int addrL = 0;  // first LED matrix - Left robot eye
const int addrR = 1;  // second LED matrix - Right robot eye

byte heartf1[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00000000
};

byte heartf2[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00000000
};

byte heartf3[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00011000,
  B00000000
};

byte heartf4[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00011000,
  B00000000
};

byte heartf5[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf6[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf7[8]={
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf8[8]={
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf9[8]={
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf10[8]={
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf11[8]={
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf12[8]={
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf13[8]={
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf14[8]={
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf15[8]={
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf16[8]={
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf17[8]={
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf18[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};


byte heartf19[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf20[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00011000,
  B00000000
};


byte heartf21[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00011000,
  B00000000
};


byte heartf22[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00000000
};

byte heartf23[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00000000
};

byte heartf24[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00011000,
  B00000000
};

byte heartf25[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf26[8]={
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf27[8]={
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

byte heartf28[8]={
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

void sleepyeye(){
  byte left[8] = {B00000000,B00000000,B01111111,B01111111,B01111111,B00111110,B00000000,B00000000};
  byte right[8] = {B00000000,B00000000,B11111110,B11111110,B11111110,B01111100,B00000000,B00000000};
  displayEmotion(left, right);
}


void displayEmotion(byte left[8], byte right[8]) {
    lc.clearDisplay(addrL);
    lc.clearDisplay(addrR);
    for(int row=0;row<8;row++) {
        lc.setRow(addrL,row,left[row]);
        lc.setRow(addrR,row,right[row]);
    }
}

void heart_eyes(){
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf1[i]);
    lc.setRow(1,i,heartf1[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf2[i]);
    lc.setRow(1,i,heartf2[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf3[i]);
    lc.setRow(1,i,heartf3[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf4[i]);
    lc.setRow(1,i,heartf4[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf5[i]);
    lc.setRow(1,i,heartf5[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf6[i]);
    lc.setRow(1,i,heartf6[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf7[i]);
    lc.setRow(1,i,heartf7[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf8[i]);
    lc.setRow(1,i,heartf8[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf9[i]);
    lc.setRow(1,i,heartf9[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf10[i]);
    lc.setRow(1,i,heartf10[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf11[i]);
    lc.setRow(1,i,heartf11[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf12[i]);
    lc.setRow(1,i,heartf12[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf13[i]);
    lc.setRow(1,i,heartf13[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf14[i]);
    lc.setRow(1,i,heartf14[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf15[i]);
    lc.setRow(1,i,heartf15[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf16[i]);
    lc.setRow(1,i,heartf16[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf17[i]);
    lc.setRow(1,i,heartf17[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf18[i]);
    lc.setRow(1,i,heartf18[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf19[i]);
    lc.setRow(1,i,heartf19[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf20[i]);
    lc.setRow(1,i,heartf20[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf21[i]);
    lc.setRow(1,i,heartf21[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf22[i]);
    lc.setRow(1,i,heartf22[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf23[i]);
    lc.setRow(1,i,heartf23[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf24[i]);
    lc.setRow(1,i,heartf24[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf24[i]);
    lc.setRow(1,i,heartf24[i]);
  }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf25[i]);
    lc.setRow(1,i,heartf25[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf26[i]);
    lc.setRow(1,i,heartf26[i]);
    }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf27[i]);
    lc.setRow(1,i,heartf27[i]);
  }
  for(int i=0;i<8;i++){
    lc.setRow(0,i,heartf28[i]);
    lc.setRow(1,i,heartf28[i]);
    }
  }

  

#include <Servo.h>


Servo servo_v;
Servo servo_o;
Servo servo1;
int servoPin_v = 10;
int servoPin_o = 9;
int servoPin_t = 11;
int j;


void tiltingmov(){
  for(int i=60;i>=50;i=i-1){
    servo1.write(i);
    delay(150);
    }
  for(int i=50;i<=60;i=i+1){
    servo1.write(i);
    delay(150);
    }
  for(int i=60;i<=75;i=i+1){
    servo1.write(i);
    delay(150);
    }
  for(int i=75;i>=60;i=i-1){
    servo1.write(i);
    delay(150);
    }
}

void HandVmov(){
  for(int i=60,j=110;i>=20 && j<=150; i=i-1,j=j+1){
    servo_o.write(i);
    servo_v.write(j);
    delay(6);
  }
  for(int i=20,j=150;i<=60 && j>=110; i=i+1,j=j-1){
    servo_o.write(i);
    servo_v.write(j);
    delay(6);
  }
  for(int i=60,j=110;i<=100 && j<=150; i=i+1,j=j+1){
    servo_o.write(i);
    servo_v.write(j);
    delay(6);
  }
  for(int i=100,j=150;i>=60 && j>=110; i=i-1,j=j-1){
    servo_o.write(i);
    servo_v.write(j);
    delay(6);
  }
 }



 
 void verticalmov_slow(){
  for(int i=110;i>=100;i=i-1){
    servo_v.write(i);
    delay(50);
    }
  for(int i=100;i<=110;i=i+1){
    servo_v.write(i);
    delay(50);
    }
  for(int i=110;i<=150;i=i+1){
    servo_v.write(i);
    delay(50);
    }
  for(int i=150;i>=110;i=i-1){
    servo_v.write(i);
    delay(50);
    }
}

void hey_I_have_visitors(){
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    Serial.println("Hey1");
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    Serial.println("Hey2");
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    Serial.println("Hey3");
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    Serial.println("Hey4");
    delay(5);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    Serial.println("Hey5");
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    Serial.println("Hey6");
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    Serial.println("Hey7");
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    Serial.println("Hey8");
    delay(5);
  }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    Serial.println("Hey9");
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    Serial.println("Hey10");
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    Serial.println("Hey11");
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    Serial.println("Hey");
    delay(5);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    Serial.println("Hey12");
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    Serial.println("Hey13");
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    Serial.println("Hey14");
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    Serial.println("Hey15");
    delay(5);
  }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    Serial.println("Hey16");
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    Serial.println("Hey17");
    delay(5);
    }
  for(int i=110;i>=100;i=i-1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=100;i<=110;i=i+1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=110;i<=150;i=i+1){
    servo_v.write(i);
    delay(5);
    }
  delay(2000);
  for(int i=150;i>=110;i=i-1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=110;i<=150;i=i+1){
    servo_v.write(i);
    delay(5);
   }
  for(int i=150;i>=110;i=i-1){
    servo_v.write(i);
    delay(5);
   }
  delay(1000);
}

void my_mom(){
  for(int j=110;j>=100;j=j-1){
    servo_v.write(j);
    delay(15);
   }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(15);
   }

  for(int j=100;j<=140;j=j+1){
    servo_v.write(j);
    delay(15);
    }
  for(int j=140;j>=100;j=j-1){
    servo_v.write(j);
    delay(15);
   }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(15);
   }

  for(int j=100;j<=110;j=j+1){
    servo_v.write(j);
    delay(15);
    }
  for(int j=110;j<=150;j=j+1){
    servo_v.write(j);
    delay(15);
    }
  for(int j=150;j>=110;j=j-1){
    servo_v.write(j);
    delay(15);
    }
  for(int j=110;j>=100;j=j-1){
    servo_v.write(j);
    delay(15);
   }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int j=100;j<=140;j=j+1){
    servo_v.write(j);
    delay(15);
    }
  for(int j=140;j>=100;j=j-1){
    servo_v.write(j);
    delay(15);
   }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(15);
   }
  for(int j=100;j<=110;j=j+1){
    servo_v.write(j);
    delay(15);
    }
}

void if_you_come(){
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(10);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(10);
  }
}
  void horizontalmov(){
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(5);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(5);
  }
  Serial.println("Hey");
}

void dont_come_close(){
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i<=100;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=100;i>=60;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=60;i>=20;i=i-1){
    servo_o.write(i);
    delay(3);
    }
  for(int i=20;i<=60;i=i+1){
    servo_o.write(i);
    delay(3);
    }        
  }
void verticalmov(){
  for(int i=110;i>=100;i=i-1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=100;i<=110;i=i+1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=110;i<=150;i=i+1){
    servo_v.write(i);
    delay(5);
    }
  for(int i=150;i>=110;i=i-1){
    servo_v.write(i);
    delay(5);
    }

  }

void I_love_a_nap(){
  for(int i=110;i>=100;i=i-1){
    servo_v.write(i);
    delay(50);
    }
  for(int i=100;i<=110;i=i+1){
    servo_v.write(i);
    delay(50);
    }
  for(int i=110;i<=150;i=i+1){
    servo_v.write(i);
    delay(40);
    }
  for(int i=150;i>=110;i=i-1){
    servo_v.write(i);
    delay(40);
    }
  }

  void do_you_want(){
   for(int i=60;i>=15;i=i-1){
    servo_o.write(i);
    delay(10);
    }
  for(int i=15;i<=60;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=60;i<=110;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=110;i>=60;i=i-1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=60;i<=110;i=i+1){
    servo_o.write(i);
    delay(15);
    }
  for(int i=110;i>=60;i=i-1){
    servo_o.write(i);
    delay(15);
    }
  }
 void tired_sleepy(){
  for(int j=110;j>=100;j=j-1){
    servo_v.write(j);
    delay(25);
  }
  for(int i=60;i>=15;i=i-1){
    servo_o.write(i);
    delay(25);
    }
  for(int i=15;i<=60;i=i+1){
    servo_o.write(i);
    delay(25);
    }
  for(int i=60;i<=110;i=i+1){
    servo_o.write(i);
    delay(25);
    }
  for(int i=110;i>=60;i=i-1){
    servo_o.write(i);
    delay(30);
    }
  for(int i=60;i>=15;i=i-1){
    servo_o.write(i);
    delay(30);
    }
  for(int i=15;i<=60;i=i+1){
    servo_o.write(i);
    delay(30);
    }
  }

void showAnger() {
  byte left[8] = {B00000000,B00000000,B01111110,B01011010,B01011010,B00100100,B00011000,B00000000};
  byte right[8] = {B00000000,B00000000,B01111110,B01011010,B01011010,B00100100,B00011000,B00000000};

  displayEmotion(left, right);
}


void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  Serial.begin(9600);
  player.begin(Serial1);
  player.volume(25);
  servo_v.attach(servoPin_v); //vertical
  servo_o.attach(servoPin_o); //horizontal
  servo1.attach(servoPin_t);  //tilting
  servo_v.write(110);
  servo_o.write(60);
  servo1.write(60);
  lc.shutdown(0,false);
lc.setIntensity(0,1);
lc.clearDisplay(0);

lc.shutdown(1,false);
lc.setIntensity(1,1);
lc.clearDisplay(1);
  //showAnger();
  player.play(7);
  showAnger();
  //I_love_a_nap();
 // dont_come_close();
  //my_mom();
  //tired_sleepy();
 // do_you_like();
 //if_you_come();
  //hey_I_have_visitors();
  //HandVmov();
  //HandVmov();
  //verticalmov_slow();
  //delay(2000);
  //player.play(2);
  //verticalmov_slow();
  //delay(6000);
  //horizontalmov();
  /*player.play(3); //yawn
  delay(6000);  
  player.play(4); // 
  delay(6000);
  player.play(5);// yay I've got
  delay(6000);  
  player.play(6); // do you like
  delay(6000);
  player.play(7); // my mom
  delay(6000);
  player.play(8); // do you want to know
  delay(6000);
  player.play(9); // if you come
  delay(6000);*/
}


void loop() {
  // put your main code here, to run repeatedly:
  /*player.play(1);
  tiltingmov();
  /*player.play(2);
  I_love_a_nap();
  player.play(3);
  hey_I_have_visitors();
  player.play(4);
  HandVmov();
  HandVmov();
  player.play(5);
  my_mom();*/
 /*player.play(6);
  do_you_want();
  player.play(7);
  sleepyeye();
  //heart_eyes();
  if_you_come();
  player.play(8);
  tired_sleepy();
  player.play(9);
  dont_come_close();*/

  //player.play(1);
  //sleepyeye();
 // showAnger();
 // tiltingmov();
  
}
