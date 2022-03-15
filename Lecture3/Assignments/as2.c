#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int first_digit, second_digit;
    printf("Enter two-digit number: ");
    scanf(" %1d%1d", &first_digit, &second_digit);

    //2-digit number where 10<=x<=19
    if (first_digit == 1)
    {
        printf("Number entered in words: ");
        
        if (second_digit == 0){
            printf("ten");
        }
        else if(second_digit == 1){
            printf("eleven");
        }
        else if(second_digit == 2){
            printf("twelve");
        }
        else if(second_digit == 3){
            printf("thirteen");
        }
        else if(second_digit == 4){
            printf("fourteen");
        }
        else if(second_digit == 5){
            printf("fifteen");
        }
        else if(second_digit == 6){
            printf("sixteen");
        }
        else if(second_digit == 7){
            printf("seventeen");
        }
        else if(second_digit == 8){
            printf("eighteen");
        }
        else{
            printf("nineteen");
        }
    }

    //2-digit where 20<=x<=99
    else
    {
        printf("Number entered in words: ");
        switch(first_digit)
        {
            case 2:
                printf("twenty");
                break;

            case 3:
                printf("thirty");
                break;

            case 4:
                printf("fourty");
                break;

            case 5:
                printf("fifty");
                break;

            case 6:
                printf("sixty");
                break;

            case 7:
                printf("seventy");
                break;

            case 8:
                printf("eighty");
                break;

            case 9:
                printf("ninety");
                break;
        } 

        switch(second_digit)
        {
            case 1:
                printf("-one");
                break;
            case 2:
                printf("-two");
                break;
            case 3:
                printf("-three");
                break;
            case 4:
                printf("-four");
                break;
            case 5:
                printf("-five");
                break;
            case 6:
                printf("-six");
                break;
            case 7:
                printf("-seven");
                break;
            case 8:
                printf("-eight");
                break;
            case 9:
                printf("-nine");
                break;
        }
    }
    return 0;
            
}