
/*
 * slave program in slaves waiting for ascii trigger letters to be sent
 * from the master thru the I2C lines.
 * 
 * 
 */




 
#include "multiplex.h"
#include "refreshMatrix.h"
#include <Wire.h>




int r;
int c;


void setup() {
  
  Wire.begin(5);                     // join i2c bus as address #5, what the master can sent to
  Wire.onReceive(receiveEvent);      // register event
 
 
 
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
  
}

void loop() {
  delay(100);              // adj for reliability 50 to 100 milliseconds
  receiveEvent(1);
  delay(100);
}


void receiveEvent(int Data) {
  while (1 < Wire.available()) {   

     }
     int i = Wire.read();           // receive byte as an integer
     switch (i){

                   case 65:        //A
                     
                        for (int k = 0; k<40; k++)
                        {
                          refreshMatrix_A(); 
                        }
                         
                   break;

                   case 66:        //B
                        for (int k = 0; k<40; k++)
                        {
                          refreshMatrix_B(); 
                        }
                     
                   break;

                   case 67:        //C
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_C(); 
                        }
                    
                   break;

                   case 68:        //D

                        
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_D(); 
                        }
                        
                   break; 


                   case 69:        //E
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_E(); 
                        }
                    
                   break;

                   case 70:        //F
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_F(); 
                        }
                    
                   break;

                    case 71:        //G
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_G(); 
                        }
                    
                   break;

                    case 72:        //H
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_H(); 
                        }
                    
                   break;


                    case 73:        //I
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_I(); 
                        }
                    
                   break;


                 
                    case 74:        //J
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_J(); 
                        }
                    
                   break;

                    case 75:        //K
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_K(); 
                        }
                    
                   break;

                    case 76:        //L
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_L(); 
                        }
                    
                   break;

                    case 77:        //M
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_M(); 
                        }
                    
                   break;

                    case 78:        //N
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_N(); 
                        }
                    
                   break;

                    case 79:        //O
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_O(); 
                        }
                    
                   break;

                    case 80:        //P
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_P(); 
                        }
                    
                   break;

                    case 81:        //Q
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_Q(); 
                        }
                    
                   break;

                   case 82:        //R
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_R(); 
                        }
                    
                   break;

                    case 83:        //S
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_S(); 
                        }
                    
                   break;

                    case 84:        //T
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_T(); 
                        }
                    
                   break;

                    case 85:        //U
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_U(); 
                        }
                    
                   break;

                    case 86:        //V
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_V(); 
                        }
                    
                   break;

                    case 87:        //W
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_W(); 
                        }
                    
                   break;

                    case 88:        //X
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_X(); 
                        }
                    
                   break;

                    case 89:        //Y
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_Y(); 
                        }
                    
                   break;

                    case 90:        //Z
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_Z(); 
                        }
                    
                   break;



                   case 48:        //0
                     
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_zero(); 
                        }
                    
                   break;

                   case 49:        //1
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_one(); 
                        }
                    
                   break;

                   case 50:        //2
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_two(); 
                        }
                    
                   break;

                   case 51:        //3
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_three(); 
                        }
                    
                   break;

                   case 52:        //4
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_four(); 
                        }
                    
                   break;

                   case 53:        //5
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_five(); 
                        }
                    
                   break;

                   case 54:        //6
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_six(); 
                        }
                    
                   break;

                   case 55:        //7
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_seven(); 
                        }
                    
                   break;

                   case 56:        //8
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_eight(); 
                        }
                    
                   break;

                   case 57:        //9
                 
                        for (int i = 0; i<40; i++)
                        {
                          refreshMatrix_nine(); 
                        }
                    
                   break;

                                    

                   
               }
 
}
