#include <stdio.h>

int main(void)
{
    int first_digit, second_digit, third_digit;
    printf("Please enter a 3-digit number: ");
    scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
    printf("%1d%1d%1d", third_digit, second_digit, first_digit);
    return 0;
}