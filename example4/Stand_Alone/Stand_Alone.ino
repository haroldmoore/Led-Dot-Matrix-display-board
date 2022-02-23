

#include <Wire.h>

 
#include "multiplex.h"
#include "refreshMatrix.h"



int r;
int c;

char ch; 
//byte A = 'A';
//byte B = 'B';
//byte C = 'C';
//byte D = 'D';
//byte E = 'E';
//byte F = 'F';

 
void setup()
{
  Wire.swap(0);               // THIS PLUS 4.7K PULLUPS ON SDA AN SCL!
  Wire.begin();
 
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

}



void loop() {
 
  delay(100);

  if (Serial.available()) {
        
             while (Serial.available()) {
                   ch = (Serial.read());
                   switch (ch){

                   case 65: //A
                  
                     Wire.beginTransmission(3);   // transmit to device #3
                     Wire.write('A');               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);  
//--------------------------------------------------------------------------------------
                     for (int k = 0; k<40; k++)
                        {
                          refreshMatrix_A(); 
                        }
//--------------------------------------------------------------------------------------
                                
                    
                   break;
                
                   case 66: //B
                  
                     Wire.beginTransmission(4);   // transmit to device #4
                     Wire.write('B');               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                 
                       
                   break;
             
                   case 67: //C
                   
                     Wire.beginTransmission(3);   // transmit to device #3
                     Wire.write('C');               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;

                   case 68: //D
                    
                      Wire.beginTransmission(4);   // transmit to device #4
                      Wire.write('D');               // sends one byte
                      Wire.endTransmission();      // stop transmitting
                      delay(100);                
                        
                   break;
                                  
                   case 69: //E
                   
                     Wire.beginTransmission(3);   // transmit to device #3
                     Wire.write('E');               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;
                  
                   case 70: //F
                   
                     Wire.beginTransmission(4);   // transmit to device #4
                     Wire.write('F');               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;

     
                   }
             }
      }
}
 
