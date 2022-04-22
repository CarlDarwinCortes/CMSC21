#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaration and Assignment of Variables
    double a, b, sqrt;
    int terminate;
    b = 1;
    terminate = 0;

    //Asks the user's input and store it as a double for precision
    printf("Enter number: ");
    scanf("%lf", &a);
    

    //Do loop to iterate the newton's law atleast 1 time.
    do {
        sqrt = ((b + (a / b)) / 2);         /*Square root formula*/
        if (fabs(b - sqrt) < (.00001 * b))  /*Takes the absolute value of a number*/
            terminate = 1;                  
        b = sqrt;     
    } while (terminate != 1);               

    //Displays the final result
    printf("Square root: %.5f\n", sqrt);    

    return 0;
}

//* Example runs