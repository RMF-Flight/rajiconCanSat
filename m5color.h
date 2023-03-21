#include <M5Atom.h>

CRGB dispColor(uint8_t r, uint8_t g, uint8_t b) {
  return (CRGB)((r << 16) | (g << 8) | b);
}

int color[][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 0}, 
                  {70, 0, 255}, {95, 205, 228},{99, 155, 255},{58, 77, 194}
                  ,{238,151,159}};
//パレット
int wait1=50;
int num=0;

void blackout(){
  for (int i = 0; i < 5; i++) {     
    for (int j = 0; j < 5; j++) {   
      
      //matrix行ごと（0,5,10,15,20）に左から右へ色番号の色で表示
      M5.dis.drawpix(i*5+j, dispColor(0,0,0));
      
    }
 }
}

void migi(){
  num=1;//緑
  blackout();
  M5.dis.drawpix(3, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(9, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(14, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(19, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(23, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(22, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(21, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(15, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(10, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(6, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(12, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  
}

void hidari(){
  //(color[num][0], color[num][1], color[num][2]))
  num=0;//赤
  
  blackout();
  M5.dis.drawpix(1, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(5, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(10, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(15, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(21, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(22, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(23, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(19, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(14, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(8, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  M5.dis.drawpix(12, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  
}

void mae(){
  int kijun=0;
  num=2;//青 
  for (int j = 0; j < 10; j++) {
      blackout();
      kijun=47-5*j;//一番下の
      //M5.dis.drawpix(kijun, dispColor(color[num][0], color[num][1], color[num][2]));
      for(int i=0; i<5; i++){
        M5.dis.drawpix(kijun-5*i, dispColor(color[num][0], color[num][1], color[num][2]));
        M5.dis.drawpix(kijun-10-2+i, dispColor(color[num][0], color[num][1], color[num][2]));
      }
      M5.dis.drawpix(kijun-14, dispColor(color[num][0], color[num][1], color[num][2]));
      M5.dis.drawpix(kijun-16, dispColor(color[num][0], color[num][1], color[num][2]));
   
      delay(wait1);
  }
}

void ushiro(){
  int kijun=0;
  num=3;//黄色  
  for (int j = 0; j < 10; j++) {
      blackout();
      kijun=-23+5*j;//一番下の
      //M5.dis.drawpix(kijun, dispColor(color[num][0], color[num][1], color[num][2]));
      for(int i=0; i<5; i++){
        M5.dis.drawpix(kijun+5*i, dispColor(color[num][0], color[num][1], color[num][2]));
        M5.dis.drawpix(kijun+8+i, dispColor(color[num][0], color[num][1], color[num][2]));
      }
      M5.dis.drawpix(kijun+15+1, dispColor(color[num][0], color[num][1], color[num][2]));
      M5.dis.drawpix(kijun+15-1, dispColor(color[num][0], color[num][1], color[num][2]));
   
      delay(wait1);
  }
}
void he(){
  int kijun=0;
  num=8;//ピンク   
  blackout();
  M5.dis.drawpix(8, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(18, dispColor(color[num][0], color[num][1], color[num][2]));
  num=0;
  M5.dis.drawpix(7, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(17, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  blackout();
  M5.dis.drawpix(8, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(18, dispColor(color[num][0], color[num][1], color[num][2]));
  num=0;
  M5.dis.drawpix(7, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(17, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait1);
  //blackout();
  
}

void taiki(){//待機
  int kijun=0;
  int wait2=2*wait1;
  num=4;//   
  M5.dis.drawpix(7, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait2);
  M5.dis.drawpix(12, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait2);
  M5.dis.drawpix(17, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait2);  
}

void conne(){//bluetooth接続
  int wait2=wait1;
  int wait3=2*wait1;
  num=4;//  
  blackout(); 
  M5.dis.drawpix(12, dispColor(255,255,255));//白
  delay(wait3);
  num=5;
  M5.dis.drawpix(11, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(13, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(7, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(17, dispColor(color[num][0], color[num][1], color[num][2]));
  delay(wait2);
  num=6;
  M5.dis.drawpix(2, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(6, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(10, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(16, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(22, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(18, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(14, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(8, dispColor(color[num][0], color[num][1], color[num][2]));

  //
  M5.dis.drawpix(12, dispColor(0,0,0));
  delay(wait2);  
  num=7;
  M5.dis.drawpix(1, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(5, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(15, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(21, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(23, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(19, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(9, dispColor(color[num][0], color[num][1], color[num][2]));
  M5.dis.drawpix(3, dispColor(color[num][0], color[num][1], color[num][2]));
  //
  M5.dis.drawpix(11, dispColor(0,0,0));
  M5.dis.drawpix(13, dispColor(0,0,0));
  M5.dis.drawpix(7, dispColor(0,0,0));
  M5.dis.drawpix(17, dispColor(0,0,0));
  delay(wait2);
///////////////////////////////
  M5.dis.drawpix(2, dispColor(0,0,0));
  M5.dis.drawpix(6, dispColor(0,0,0));
  M5.dis.drawpix(10, dispColor(0,0,0));
  M5.dis.drawpix(16, dispColor(0,0,0));
  M5.dis.drawpix(22, dispColor(0,0,0));
  M5.dis.drawpix(18, dispColor(0,0,0));
  M5.dis.drawpix(14, dispColor(0,0,0));
  M5.dis.drawpix(8, dispColor(0,0,0));
  delay(wait2);

  blackout();
  
}
