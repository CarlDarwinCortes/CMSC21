#include <stdio.h>
#include <math.h>

int main(void){
     int i, exp;

     printf("TABLES OF POWERS OF TWO\n n     2 to the n\n---  --------------\n");

     for (i = 0; i<=10; i++){
         exp = pow(2, i);  //computes 2 with the power of i

         printf(" %d        %d\n", i, exp);
     }
     return 0;
}
