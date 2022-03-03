#include <stdio.h>

int main(void)
{
   int i, j;      //Declaring i & j as an integer variable.
   float x, y;    //Declaring x & y as a float variable.

   //Assigning integer and float(f) values to variables.
   i = 10;
   j = 20;
   x = 43.2892f;  
   y = 5527.0f;

   ////Displays ordinary characters and 4 conversion specification replaced by the values of i, j, x, y respectively.
   printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
}


