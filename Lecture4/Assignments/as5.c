#include <stdio.h>

int main(void){
    int i, n, starting_day, blank_days;


    //Asks the user inputs
    printf("Enter number of days in month: ");
    scanf(" %d", &n);

    printf("Enter starting day of (1=Sun, 7=Sat): ");
    scanf(" %d", &starting_day);
    printf("\n");

    //Validates the correct amount of days in a month.
    if (n<=31 && n>=28)
    {
        //WHILE LOOP: Prints the blank days of the first week
        blank_days = 1;
        while(blank_days<starting_day){
            printf("   ", blank_days++);
        }
        
        //FOR LOOP: Prints the calendar numbers
        for (i = 1; i <= n; i++) {

            //Adds a "newline" after a specific number in the calendar
            if (i == 8-starting_day||i == 15-starting_day||i == 22-starting_day||i == 29-starting_day||i == 36-starting_day){
                printf("%3d\n", i);
            }

            else{
                printf("%3d", i);
            }
        }
    }
    else 
    {
        printf("Invalid Number of Days: %d", n);
        return 0;
    }
   
}