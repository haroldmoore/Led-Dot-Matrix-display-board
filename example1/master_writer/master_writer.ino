

#include <Wire.h>
#include <stdio.h>
#include <avr/wdt.h>

char ch;

byte A = 'A';
byte B = 'B';
byte C = 'C';
byte D = 'D';
byte E = 'E';
byte F = 'F';
byte G = 'G';
byte H = 'H';
byte I = 'I';

byte J = 'J';
byte K = 'K';
byte L = 'L';
byte M = 'M';
byte N = 'N';
byte O = 'O';
byte P = 'P';
byte Q = 'Q';
byte R = 'R';

byte S = 'S';
byte T = 'T';
byte U = 'U';
byte V = 'V';
byte W = 'W';
byte X = 'X';
byte Y = 'Y';
byte Z = 'Z';

byte n0 = '0';
byte n1 = '1';
byte n2 = '2';
byte n3 = '3';
byte n4 = '4';
byte n5 = '5';
byte n6 = '6';
byte n7 = '7';
byte n8 = '8';
byte n9 = '9';






void setup() {
 
  Wire.begin(); // join i2c bus (address optional for master)
  Serial.begin(9600);
  
}

/*
 * 
 * deactivate sendit, hookup the serial port on the arduino(nano) to I2C to the slaves
 * and trigger displays by pressing upper case keys in a terminal program.
 */


void loop() {

  sendit();
//  software_Reset();
  delay(100);

  if (Serial.available()) {
        
             while (Serial.available()) {
                   ch = (Serial.read());
                   switch (ch){

                   case 65: //A
                     Wire.beginTransmission(6);   // transmit to device #6
                     Wire.write(A);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);             
                        
                   break;
                
                   case 66: //B
                   
                     Wire.beginTransmission(7);   // transmit to device #7
                     Wire.write(B);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                 
                       
                   break;
             
                   case 67: //C
                   
                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write(C);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;

                   case 68: //D
                    
                      Wire.beginTransmission(9);   // transmit to device #9
                      Wire.write(D);               // sends one byte
                      Wire.endTransmission();      // stop transmitting
                      delay(100);                
                        
                   break;
                                  
                   case 69: //E
                   
                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write(E);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;
                  
                   case 70: //F
                   
                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write(F);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;

                    case 71: //G
                   
                     Wire.beginTransmission(11);   // transmit to device #12
                     Wire.write(G);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);                
                       
                   break;


                  

                   case 48: //0
                   
                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write('0');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 49: //1
                   
                     Wire.beginTransmission(6);   // transmit to device #6
                     Wire.write('1');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 50: //2
                   
                     Wire.beginTransmission(7);   // transmit to device #7
                     Wire.write('2');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 51: //3
                   
                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write('3');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 52: //4
                   
                     Wire.beginTransmission(9);   // transmit to device #9
                     Wire.write('4');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 53: //5
                   
                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write('5');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 54: //6
                   
                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write('6');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 55: //7
                   
                     Wire.beginTransmission(12);   // transmit to device #12
                     Wire.write('7');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 56: //8
                   
                     Wire.beginTransmission(13);   // transmit to device #13
                     Wire.write('8');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                   case 57: //9
                   
                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write('9');             // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(800);                
                       
                   break;

                                    
                   
                   }
             }
      }
}
  
 //------------------------------------
 /*
  * sendit, sends characters to displays, at its own address, repeating
  * 
  * 
  * 
  * 
  */
//-------------------------------------

  void sendit(){
                   
                     delay(100); 
                     Wire.beginTransmission(4);   // transmit to device #4
                     Wire.write(A);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(5);   // transmit to device #5
                     Wire.write(B);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write(C);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(9);   // transmit to device #9
                     Wire.write(D);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write(E);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write(F);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(12);   // transmit to device #12
                     Wire.write(G);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(13);   // transmit to device #13
                     Wire.write(H);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write(I);              // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);


                     Wire.beginTransmission(6);   // transmit to device #6
                     Wire.write(J);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(7);   // transmit to device #7
                     Wire.write(K);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write(L);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(9);   // transmit to device #9
                     Wire.write(M);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write(N);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write(O);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(12);   // transmit to device #12
                     Wire.write(P);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(13);   // transmit to device #13
                     Wire.write(Q);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write(R);              // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                      Wire.beginTransmission(6);   // transmit to device #6
                     Wire.write(S);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(7);   // transmit to device #7
                     Wire.write(T);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write(U);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(9);   // transmit to device #9
                     Wire.write(V);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write(W);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     
                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write(X);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(12);   // transmit to device #12
                     Wire.write(Y);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100); 
                     
                     Wire.beginTransmission(13);   // transmit to device #13
                     Wire.write(Z);               // sends one byte
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
                     

                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write(n0);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(6);   // transmit to device #6
                     Wire.write(n1);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(7);   // transmit to device #7
                     Wire.write(n2);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(8);   // transmit to device #8
                     Wire.write(n3);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(9);   // transmit to device #9
                     Wire.write(n4);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(10);   // transmit to device #10
                     Wire.write(n5);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(11);   // transmit to device #11
                     Wire.write(n6);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);


                     Wire.beginTransmission(12);   // transmit to device #12
                     Wire.write(n7);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);

                     Wire.beginTransmission(13);   // transmit to device #13
                     Wire.write(n8);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);


                     Wire.beginTransmission(14);   // transmit to device #14
                     Wire.write(n9);               // sends one byte
                     delay(100);
                     Wire.endTransmission();      // stop transmitting
                     delay(100);
              
                    
                    

                     
  }


 

  
