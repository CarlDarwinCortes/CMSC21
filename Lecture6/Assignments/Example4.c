/*Sizeof Operator*/

#include <stdio.h>

int main(void){
    printf("Size of char data type: %u\n", sizeof(char));
    printf("Size of int data type: %u\n", sizeof(int));
    printf("Size of float data type: %u\n", sizeof(float));
    printf("Size of double data type: %u\n", sizeof(double));

/*Array Length*/
    int number[16];

    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elemets the array can hold is: %d\n", n);
    
    return 0;
}