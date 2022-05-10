#include <stdio.h>
#include <stdbool.h>

//Macro: Calculating the size of the array[pathway]
#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main (void){
    //Shortened initialization
    bool pathway[8] = {1,0,1};
    /*
    Similar to: {1, 0, 1, 0, 0, 0, 0, 0};
    */
   
    //Loops through the body of the array[pathway] if true = open, otherwise false.
    for (int i = 0; i < NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathway[%d] is open \n", i);
        }
        else{
            printf("pathway[%d]\n", i);
        }
    }

    return 0;
}