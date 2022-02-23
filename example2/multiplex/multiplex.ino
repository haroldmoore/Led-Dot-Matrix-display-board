/*
 * 
-----------------5x7 matrix with decimal point---------------- 
-------------------by All Thumbs  11/22/2021------------------
 *
 *
 *  a 5x7 matrix without a decimal point, becomes a 6x7 matrix 
 *  with a decimal point.
 */
#include "multiplex.h"
#include "refreshMatrix.h"


//-----------------------------------------------------------------
//int rowPins[7] = {1, 16, 2, 3, 13, 12, 11};   //-row program pins
//-----------------------------------------------------------------

//--------------------------------------------------------------------
//int colPins[6] = {5, 4, 0, 10, 15, 14 };      //-column program pins
//--------------------------------------------------------------------



int r;
int c;


void setup() {

  display_hex();
  
  for (int c = 0; c < 6; c++)
  {
    pinMode(colPins[c], OUTPUT);                    // initalize column pins
  }

  for (int r = 0; r < 7; r++)                       // initialize row pins
  {
      pinMode(rowPins[r], OUTPUT);
  }
}

void loop() {


  display_hex();
 
  
}


  
