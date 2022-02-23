/*
 * 
 * for use as a single stand alone display using 
 * rx an tx pins going thru a TTL to USB adaptor.
 * 
 * https://www.diyautotune.com/product/dlp-txrx-internal-usb-serial-adapter/
 * 
 * 
 */

#include <Wire.h>
#include <stdio.h>
#include <avr/wdt.h>

#include "multiplex.h"
#include "refreshMatrix.h"

//--------------------------------------------------------
#define rxPin 8          //
#define txPin 9          //
//--------------------------------------------------------
char ch;

//byte val = 0;


//-------------------------------sign on--------------------------------------
void sign_on(){

Serial.println("--------------------------------------------------------");
Serial.println("--- ATTINY3226 5x7 led dot matrix display controller ---");
Serial.println("--------------------------------------------------------");

}
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------


void setup() {
 
  Wire.begin();

  pinMode(rxPin,INPUT);
  pinMode(txPin,OUTPUT);
  Serial.begin(9600);
//-----------------------------------------------------
  for (int c = 0; c < 6; c++)
  {
    pinMode(colPins[c], OUTPUT);                    // initalize column pins
  }

  for (int r = 0; r < 7; r++)                       // initialize row pins
  {
      pinMode(rowPins[r], OUTPUT);
  }
//-----------------------------------------------------
  delay(300);
  sign_on();
 


  
}

void loop() {



 

  if (Serial.available()) {
        
             while (Serial.available()) {
                   ch = (Serial.read());
                  
                   switch (ch){

                   case 65: //A
                      for (int k = 0; k<40; k++){ refreshMatrix_A();}

                  
                                        
                   break;
                
                   case 66: //B
                      for (int k = 0; k<40; k++){ refreshMatrix_B();}
                                
                   break;
             
                   case 67: //C
                       for (int k = 0; k<40; k++){ refreshMatrix_C();}
                                
                       
                   break;

                   case 68: //D
                      for (int k = 0; k<40; k++){ refreshMatrix_D();}
                                   
                        
                   break;
                                  
                   case 69: //E
                      for (int k = 0; k<40; k++){ refreshMatrix_E();}
                                 
                       
                   break;
                  
                   case 70: //F
                      for (int k = 0; k<40; k++){ refreshMatrix_F();}
                                 
                       
                   break;

                    case 71: //G
                       for (int k = 0; k<40; k++){ refreshMatrix_G();}
                                 
                       
                   break;


                   case 72: //H
                       for (int k = 0; k<40; k++){ refreshMatrix_H();}
                   break;
                   
                   case 73: //I
                       for (int k = 0; k<40; k++){ refreshMatrix_I();}
                   break;
                   
                   case 74: //J
                       for (int k = 0; k<40; k++){ refreshMatrix_J();}
                   break;
                   
                   case 75: //K
                       for (int k = 0; k<40; k++){ refreshMatrix_K();}
                   break;
                   
                   case 76: //L
                       for (int k = 0; k<40; k++){ refreshMatrix_L();}
                   break;
                   
                   case 77: //M
                        for (int k = 0; k<40; k++){ refreshMatrix_M();}
                   break;
                   
                   case 78: //N
                       for (int k = 0; k<40; k++){ refreshMatrix_N();}
                   break;
                   
                   case 79: //O
                       for (int k = 0; k<40; k++){ refreshMatrix_O();}
                   break;
                   
                   case 80: //P
                       for (int k = 0; k<40; k++){ refreshMatrix_P();}
                   break;
                   
                   case 81: //Q
                       for (int k = 0; k<40; k++){ refreshMatrix_Q();}
                   break;
                   
                   case 82: //R
                       for (int k = 0; k<40; k++){ refreshMatrix_R();}
                   break;
                   
                   case 83: //S
                       for (int k = 0; k<40; k++){ refreshMatrix_S();} 
                   break;
                   
                   case 84: //T
                       for (int k = 0; k<40; k++){ refreshMatrix_T();}
                   break;
                   
                   case 85: //U
                       for (int k = 0; k<40; k++){ refreshMatrix_U();}
                   break;
                   
                   case 86: //V
                       for (int k = 0; k<40; k++){ refreshMatrix_V();}
                   break;
                   
                   case 87: //W
                       for (int k = 0; k<40; k++){ refreshMatrix_W();}
                   break;

                   case 88: //X
                      for (int k = 0; k<40; k++){ refreshMatrix_X();}
                   break;
                   
                   case 89: //Y
                       for (int k = 0; k<40; k++){ refreshMatrix_Y();}
                   break;
                   
                   case 90: //Z
                       for (int k = 0; k<40; k++){ refreshMatrix_Z();}
                   break;

      

                   case 48: //0
                        for (int k = 0; k<40; k++){ refreshMatrix_zero();}
                               
                       
                   break;

                   case 49: //1
                        for (int k = 0; k<40; k++){ refreshMatrix_one();}
                               
                       
                   break;

                   case 50: //2
                        for (int k = 0; k<40; k++){ refreshMatrix_two();}
                                
                       
                   break;

                   case 51: //3
                        for (int k = 0; k<40; k++){ refreshMatrix_three();}
                               
                       
                   break;

                   case 52: //4
                        for (int k = 0; k<40; k++){ refreshMatrix_four();}
                                
                       
                   break;

                   case 53: //5
                        for (int k = 0; k<40; k++){ refreshMatrix_five();}
                                    
                       
                   break;

                   case 54: //6
                        for (int k = 0; k<40; k++){ refreshMatrix_six();}
                                 
                       
                   break;

                   case 55: //7
                        for (int k = 0; k<40; k++){ refreshMatrix_seven();}
                               
                       
                   break;

                   case 56: //8
                        for (int k = 0; k<40; k++){ refreshMatrix_eight();}
                                
                       
                   break;

                   case 57: //9
                        for (int k = 0; k<40; k++){ refreshMatrix_nine();}
                                   
                       
                   break;

                                    
                   
                   }
                    
             }
      }
}





  
 

 

  
