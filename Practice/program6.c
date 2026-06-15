/*
    ALgorithm

    START
        Accept First Number as No1
        Accept Second NUmber as No2
        Perform Addition of No1 & No2
        DIsplay the result
    STOP
*/

#include<stdio.h>

int main()
{
    // variable creation with default values
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter first number: \n");
    scanf("%f",&i);

    printf("Enter second number: \n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is: %f\n" ,k);

    return 0;
}