#include <stdio.h>

int main(void)
{
    int first_digit, second_digit;
    printf("Please enter a 2-digit number: ");
    scanf("%1d%1d", &first_digit, &second_digit);
    printf("%1d%1d", second_digit, first_digit);
    return 0;
}