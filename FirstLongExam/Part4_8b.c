#include <stdio.h>

int main(void){
    int a, b;

    a = 2;
    b = 3;

//Part a.
    printf("a.\n");
    if ( a == 2 ) printf( "\t*****\n" );

    if ( b == 3 ){
        printf("\t>>>>>\n" );
        printf("\t<<<<<\n" );
    }

//Part b.
    printf("b.\n");
    if ( a == 2 ) printf( "\t*****\n" );
    else{
        printf( "\t>>>>>\n" );
        printf( "\t<<<<<\n" );
    }

//Part c.
    printf("c.\n");
    if ( a == 2 ) printf( "\t*****\n" );

    if ( b == 3 ){
        printf( "\t<<<<<\n" );
    }

}