#include <stdio.h>
#include <math.h>

//Structure tag name: linear_eq
//Members: declared as float numbers [to include decimal points & avoid truncated values]
//Stores every variable used in this program.
struct linear_eq{
    float x1, y1;
    float x2, y2;
    float calculate_distance;
    float calculate_slope;
    float calculate_midpoint1, calculate_midpoint2;
    float m, b;
};

//Slope functions have all return void types because it already displays the result.

//Pointer Parameters that points to the address of structure variables
//CALCULATES THE SLOPE OF TWO POINTS:
//PARAMETERS: POINTERS & STRUCTURE
void slope(float*x1, float *y1, float *x2, float *y2, struct linear_eq num){

    num.calculate_slope = (*y2 - *y1)/(*x2 - *x1);    //Uses indirection operator to a pointer with valid address

    printf("\tSLOPE: \t\t\t%0.3f\n", num.calculate_slope);  //DISPLAYS THE OUTPUT

}

//CALCULATES THE MIDPOINT OF TWO POINTS:
void mid_point(float*x1, float *y1, float *x2, float *y2, struct linear_eq num){
    num.calculate_midpoint1 = (*x2 + *x1)/2;  
    num.calculate_midpoint2 = (*y2 + *y1)/2;
    printf("\tMIDPOINT: \t\t(%0.3f, %0.3f)\n", num.calculate_midpoint1, num.calculate_midpoint2);   //DISPLAYS THE OUTPUT
}

//CALCULATES THE DISTANCE BETWEEN TWO POINTS:
void point_distance(struct linear_eq num){

    //sqrt[(x2-x1)^2 + (y2-y1)^2]
    num.calculate_distance = sqrt(pow((num.x2 - num.x1), 2) + pow((num.y2 - num.y1), 2));

    printf("\tDISTANCE: \t\t%0.3f\n", num.calculate_distance);  //DISPLAYS THE OUTPUT
}

//CALCULATES SLOPE-INTERCEPT FORM OF TWO POINTS:
//PARAMETERS: POINTERS & STRUCTURE
void slope_interceptform(float*x1, float *y1, float *x2, float *y2, struct linear_eq num){

    num.m = (*y2 - *y1)/(*x2 - *x1);
    num.b = *y1 - (num.m * (*x1));
    
    printf("\tSLOPE-INTERCEPT: \ty = %0.3fx + %0.3f\n", num.m, num.b);  //DISPLAYS THE OUTPUT
}



int main(){
    //
    struct linear_eq calculate;
    printf("[1ST POINT] Enter x and y coordinates: ");
    scanf("%f %f", &calculate.x1, &calculate.y1);
    printf("[2ND POINT] Enter x and y coordinates: ");
    scanf("%f %f", &calculate.x2, &calculate.y2);

    //Displays the input of the user:
    printf("\nRESULTS GIVEN TWO POINTS ");
    printf("(%0.3f, %0.3f) (%0.3f, %0.3f):\n", calculate.x1, calculate.y1, calculate.x2, calculate.y2);

    //Function Call by Reference & Structure
    slope(&calculate.x1, &calculate.y1, &calculate.x2, &calculate.y2, calculate);
    mid_point(&calculate.x1, &calculate.y1, &calculate.x2, &calculate.y2, calculate);
    point_distance(calculate);
    slope_interceptform(&calculate.x1, &calculate.y1, &calculate.x2, &calculate.y2, calculate);
    printf("\n");
    return 0;
}