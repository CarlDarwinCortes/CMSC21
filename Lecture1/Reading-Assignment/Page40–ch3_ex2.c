#include <stdio.h>

int main(void)
{
    int i;
    float x;

    //Assigning variables
    i = 40;
    x = 839.21f;


    /*Prints the following Conversion specification:
    %+-5d   =minimum of 5 characters and three spaces will be added beforeward/afterward
    %5.3d   =minimum of 5 characters and 3 digits
    %10.3f  =float, 10 characters and 3 decimal points
    %e      =exponential form
    %d      -either exponential form or decimalform with 10 characters overall.
     */
    printf("|%d|%5d|%-5d|%-5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}