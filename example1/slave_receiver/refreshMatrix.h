

//-------------------------------------------------------------
int rowPins[7] = {1, 14, 2, 3, 13, 12, 11}; //-program ROW pins
//-------------------------------------------------------------

//-------------------------------------------------------------
int colPins[6] = {5, 4, 0, 10, 16, 15 }; //-program COLUMN pins
//-------------------------------------------------------------




void refreshMatrix_zero()                      
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], zero[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
 // delay(2000);  
  return;
}

void refreshMatrix_one()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], one[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_two()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], two[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_three()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], three[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_four()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], four[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_five()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], five[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_six()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], six[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_seven()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], seven[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_eight()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], eight[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_nine()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], nine[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_A()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], A[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_B()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], B[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_C()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], C[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_D()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], D[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}
void refreshMatrix_E()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], E[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}



void refreshMatrix_F()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], F[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_G()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], G[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_H()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], H[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_I()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], I[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void refreshMatrix_J()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], J[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_K()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], K[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_L()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], L[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_M()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], M[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_N()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], N[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_O()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], O[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_P()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], P[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_Q()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], Q[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_R()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], R[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_S()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], S[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_T()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], T[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_U()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], U[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_V()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], V[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_W()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], W[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_X()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], X[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_Y()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], Y[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}

void refreshMatrix_Z()                       
{
   for (int c = 0; c < 6; c++)
    {
        int r;
        for (r = 0; r < 7; r++)
        {
          digitalWrite(rowPins[r], Z[r][c]);
        } 
        digitalWrite(colPins[c], HIGH);
        delay(2);
        digitalWrite(colPins[c], LOW);
    }
  return;
}





 
