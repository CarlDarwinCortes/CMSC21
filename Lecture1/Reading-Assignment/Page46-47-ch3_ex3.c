/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    //Declaring variables as integers
    int num1, denom1, num2, denom2, result_num, result_denom;   

    /*
    printf displays the words for user to interact
    scanf takes integer from user and store the info inside the assigned variables
    format specifiers are seperated by a slash to look like fraction
    */
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter first fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;     //Performs cross multiplication and the answers are added to get the numerator
    result_denom = denom1 * denom2;                 //Performs multiplication on the denominators of the fraction

    printf("The sum is %d/%d\n", result_num, result_denom); //Results are displayed with a slash in-between

    return 0;
}