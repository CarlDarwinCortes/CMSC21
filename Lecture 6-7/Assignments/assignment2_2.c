#include <stdio.h>
#include <stdbool.h>

#define row 8
#define column 8

/*Intializing Arrays*/
int main (void){
    bool road_networks[row][column] = 
    {/*  A  B  C  D  E  F  G  H  */
        {1, 1, 0, 0, 0, 1, 0, 0},   /* A */
        {1, 1, 1, 0, 0, 0, 0, 0},   /* B */
        {0, 1, 1, 0, 1, 1, 0, 0},   /* C */
        {0, 0, 0, 1, 1, 0, 0, 0},   /* D */
        {0, 0, 0, 1, 1, 0, 0, 0},   /* E */
        {1, 0, 1, 0, 0, 1, 0, 0},   /* F */
        {1, 0, 0, 1, 0, 0, 1, 0},   /* G */
        {0, 0, 0, 0, 0, 1, 0, 1}    /* H */
    };


    int i, j;
    /*Column & Row Heading Letters */
    char c[row + 1][column + 1]={
        {'\0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}, 
        {'A'}, 
        {'B'}, 
        {'C'}, 
        {'D'}, 
        {'E'}, 
        {'F'}, 
        {'G'}, 
        {'H'}
    };
/*Displaying the station by rows and columns*/ 
    //rows
    for (i = 0; i <= row; i++){   // <= 8 to make the matrix similar to a 9x9 Because the Headings are +1 row and column
        //columns
        for (j = 0; j <= column; j++){
            //Charging Stations: C & D
            if ((j == 0 && (i == 3 || i == 4)) || (i == 0 && (j == 3 || j == 4))){
                printf("[%c]\t", c[i][j]);
            }
            //Stations
            else if (i == 0 || j == 0){
                printf("%c\t", c[i][j]);
            }
            //Opened or closed road networks
            else if(i>=1 && j>=1){
                printf("%d\t", road_networks[i-1][j-1]);
            }
        }
        printf("\n");
    }

/*
While Loop to iterate the question until become false
IF Statement: Finding the path of a Charging Point
*/
    //Displays the instruction for the Users
    int choice;
    bool done = 1;

    while(done){
        printf("Which point are you located?\n");
        printf("\t 0 - A \t 1 - B \n");
        printf("\t 2 - C \t 3 - D \n");
        printf("\t 4 - E \t 5 - F \n");
        printf("\t 6 - G \t 7 - H \n");
        printf("Write the station number here: ");
        scanf("%d", &choice);  //allocate the user's input
        if (choice == 0){        //A
            printf("At point: A\n");
            printf("Now at point: B\n");
            printf("Now at point: C\n");
            printf("point: C arrived to charging station\n");
            done = 0;
        }   
        else if (choice == 1){   //B
            printf("At point: B\n");
            printf("Now at point: C\n");
            printf("point: C arrived to charging station\n");
            done = 0;
        }
        
        else if (choice == 2){   //C
            printf("At point: C\n");
            printf("point: C arrived to charging station\n");
            done = 0;
        }

        else if (choice == 3){   //D
            printf("At point: D\n");
            printf("point: D arrived to charging station\n");
            done = 0;
        }

        else if (choice == 4){   //E
            printf("At point: E\n");
            printf("Now at point: D\n");
            printf("point: D arrived to charging station\n");
            done = 0;
        }

        else if (choice == 5){   //F
            printf("At point: F\n");
            printf("Now at point: D\n");
            printf("point: D arrived to charging station\n");
            done = 0;
        }

        else if (choice == 6){   //G
            printf("At point: G\n");
            printf("Now at point: D\n");
            printf("point: D arrived to charging station\n");
            done = 0;
        }

        else if (choice == 7){   //H
            printf("At point: H\n");
            printf("Now at point: F\n");
            printf("Now at point: C\n");
            printf("point: C arrived to charging station\n");
            done = 0;
        }

        else{
            printf("Error: Please Try Again\n");
            printf("Choose From [0-7]\n");
        }

    }
    
    return 0;


}

