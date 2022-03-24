#include <stdio.h>

int main(void){
    int i, n , m;
    i = n = m = 0;

    while (i<10){
        printf("WHILE: %d \n", i++); //optional statement to compare their output similarities.
    }

    for(; n<10;){
        printf("FOR: %d \n", n++);
    }

    /*Assuming that the loop bodies are the same, the "while" and "for" statements are considered equivalent.
    The first (initialization) and third (update) expressions are omitted in "for" statement, only the second (condition). 
    Hence, the resulting Loop is nothing more than a while statement.
    */
    
    do{
        printf("DO: %d \n", m++);
    }while(m<10);

    /* This leaves us with the option that the "do" statement is the one that differs in terms of execution.
    The body gets executed first before testing the condition.
    */

    return 0;
}

