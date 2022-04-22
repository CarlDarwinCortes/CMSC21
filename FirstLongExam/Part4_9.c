#include <stdio.h>
int main(){

    //Declaring and Assigning variables
    int row, column = 0;
    int size = 0;
    char cont = 'y';

    //Main While Loop that iterates until the user wants to terminate.
    while(cont = 'y'){                                                      
        printf("Enter square size: ");
        scanf("%d", &size);

        //For Loop of the Square
        for(row = 0 ; row < size ; row++){     /*Iterates through the number of rows*/                                               
            for(column = 0 ; column < size ; column++){    /*Iterates through the number of columns*/ 
                if (column == 0 || column == size - 1|| row == 0 || row == size -1){           
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("Print another square? Enter y or n: "); /*Asks the users input*/
        scanf(" %c", &cont);
        if (cont == 'n'){
            printf("END");
            break;
        }    
        else if (cont != 'y' && cont != 'n'){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf(" %c", cont);
        }
    }
    return 0;
}
