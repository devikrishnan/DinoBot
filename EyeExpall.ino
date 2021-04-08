#include "LedControl.h"
LedControl lc=LedControl(12,11,10,2);

void setup()
{
lc.shutdown(0,false);
lc.setIntensity(0,1);
lc.clearDisplay(0);

lc.shutdown(1,false);
lc.setIntensity(1,1);
lc.clearDisplay(1);
}

byte eyecrollf1[8]= { B00000000, B00111100,B01111110,B01100110,B01100110,B01111110,B00111100,B00000000 };
byte eyecrollf2[8]= { B00000000, B00111100,B01111110,B01110010,B01110010,B01111110,B00111100,B00000000 };
byte eyecrollf3[8]={B00000000,B00111100,B01111110,B01100110,B01100110,B01111110,B00111100,B00000000 };
byte eyecrollf4[8]={
  B00000000,
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf5[8]={
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf6[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf7[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00000000};
byte eyecrollf8[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf9[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf10[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf11[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf12[8]={
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf13[8]={
  B00000000,
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf14[8]={
  B00000000,
  B00111100,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf15[8]={
  B00000000,
  B00111100,
  B01001110,
  B01001110,
  B01111110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf16[8]={
  B00000000,
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf17[8]={
  B00000000,
  B00111100,
  B01110010,
  B01110010,
  B01111110,
  B01111110,
  B00111100,
  B00000000};

byte eyecrollf18[8]={
  B00000000,
  B00111100,
  B01111110,
  B01111110,
  B01110010,
  B01110010,
  B00111100,
  B00000000};

byte eyecrollf19[8]={
  B00000000,
  B00111100,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};

byte eyecrollf20[8]={
  B00000000,
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf21[8]={
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf22[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01111110,
  B00111100,
  B00000000};
byte eyecrollf23[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00000000
  };
byte eyecrollf24[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00000000
  };
byte eyecrollf25[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111110,
  B00111100,
  B00000000
  };
byte eyecrollf26[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01111110,
  B00111100,
  B00000000
  };
byte eyecrollf27[8]={
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000
  };
byte eyecrollf28[8]={
  B00000000,
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000
  };

byte eyecrollf29[8]={
  B00000000,
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000
  };

byte eyecrollf30[8]={
  B00000000,
  B00111100,
  B01111110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,
  B00000000
  };



byte neutral_left[8]={
  B00000000,
  B01111100,
  B11111110,
  B11000110,
  B11000110,
  B11111110,
  B01111100,
  B00000000
  };
byte neutral_right[8]={
  B00000000,
  B00111110,
  B01111111,
  B01100011,
  B01100011,
  B01111111,
  B00111110,
  B00000000
  };

byte sadness_left[8]={
  B00000000,
  B00000000,
  B11111110,
  B11111110,
  B11000110,
  B01111100,
  B00000000,
  B00000000
  };
byte sadness_right[8]={
  B00000000,
  B00000000,
  B01111111,
  B01111111,
  B01100011,
  B00111110,
  B00000000,
  B00000000
  };

byte surprise_left[8]={
  B00111000,
  B01111100,
  B11000110,
  B11000110,
  B11000110,
  B11000110,
  B01111100,
  B00111000
  };
byte surprise_right[8]={
  B00011100,
  B00111110,
  B01100011,
  B01100011,
  B01100011,
  B01100011,
  B00111110,
  B00011100
  };

byte happy_left[8]={
  B00111000,
  B01111100,
  B11111110,
  B11000110,
  B11000110,
  B11111110,
  B01111100,
  B00000000
  };
byte happy_right[8]={
  B00011100,
  B00111110,
  B01111111,
  B01100011,
  B01100011,
  B01111111,
  B00111110,
  B00000000
  };

byte fear_left[8]={
  B00000000,
  B01111100,
  B11111110,
  B11000110,
  B11000110,
  B11000110,
  B01111100,
  B00000000
  };
byte fear_right[8]={
  B00000000,
  B00111110,
  B01111111,
  B01100011,
  B01100011,
  B01100011,
  B00111110,
  B00000000
  };


void fear_eyes() {
  for(int i=0;i<8;i++){
    lc.setRow(0,i,fear_left[i]);
    lc.setRow(1,i,fear_right[i]);
  }
  delay(150);
}

void happy_eyes() {
  for(int i=0;i<8;i++){
    lc.setRow(0,i,happy_left[i]);
    lc.setRow(1,i,happy_right[i]);
  }
  delay(150);
}
void surprise_eyes() {
  for(int i=0;i<8;i++){
    lc.setRow(0,i,surprise_left[i]);
    lc.setRow(1,i,surprise_right[i]);
  }
  delay(150);
}
void sadness_eyes() {
  for(int i=0;i<8;i++){
    lc.setRow(0,i,sadness_left[i]);
    lc.setRow(1,i,sadness_right[i]);
  }
  delay(150);
}
void neutral_eyes() {
  for(int i=0;i<8;i++){
    lc.setRow(0,i,neutral_left[i]);
    lc.setRow(1,i,neutral_right[i]);
    }
  delay(150);
}

void rolleyes() {                  
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf1[i]);
    lc.setRow(1,i,eyecrollf1[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf2[i]);
    lc.setRow(1,i,eyecrollf2[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf3[i]);
    lc.setRow(1,i,eyecrollf3[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf4[i]);
    lc.setRow(1,i,eyecrollf4[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf5[i]);
    lc.setRow(1,i,eyecrollf5[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf6[i]);
    lc.setRow(1,i,eyecrollf6[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf7[i]);
    lc.setRow(1,i,eyecrollf7[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf8[i]);
    lc.setRow(1,i,eyecrollf8[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf9[i]);
    lc.setRow(1,i,eyecrollf9[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf10[i]);
    lc.setRow(1,i,eyecrollf10[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf11[i]);
    lc.setRow(1,i,eyecrollf11[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf12[i]);
    lc.setRow(1,i,eyecrollf12[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf13[i]);
    lc.setRow(1,i,eyecrollf13[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf14[i]);
    lc.setRow(1,i,eyecrollf14[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf15[i]);
    lc.setRow(1,i,eyecrollf15[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf16[i]);
    lc.setRow(1,i,eyecrollf16[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf17[i]);
    lc.setRow(1,i,eyecrollf17[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf18[i]);
    lc.setRow(1,i,eyecrollf18[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf19[i]);
    lc.setRow(1,i,eyecrollf19[i]);
    }
  delay(400);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf20[i]);
    lc.setRow(1,i,eyecrollf20[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf21[i]);
    lc.setRow(1,i,eyecrollf21[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf22[i]);
    lc.setRow(1,i,eyecrollf22[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf23[i]);
    lc.setRow(1,i,eyecrollf23[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf24[i]);
    lc.setRow(1,i,eyecrollf24[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf25[i]);
    lc.setRow(1,i,eyecrollf25[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf26[i]);
    lc.setRow(1,i,eyecrollf26[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(1,i,eyecrollf27[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf28[i]);
    lc.setRow(1,i,eyecrollf28[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf29[i]);
    lc.setRow(1,i,eyecrollf29[i]);
    }
  delay(150);
  for(int i=0;i<8;i++){
    lc.setRow(0,i,eyecrollf30[i]);
    lc.setRow(1,i,eyecrollf30[i]);
    }
  delay(150);
}



void loop() {
  rolleyes();
  delay(10000);
  neutral_eyes();
  delay(10000);
  happy_eyes();
  delay(10000);
  sadness_eyes();
  delay(10000);
  fear_eyes();
  delay(10000);
  surprise_eyes();
  delay(10000);

}
