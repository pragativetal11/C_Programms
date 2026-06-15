#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;                   //to store first input
    float fValue2 = 0.0f;                   //to store second input
    float fResult = 0.0f;                   //to store the result

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;            // Perform the addition

    printf("Addition is: %f\n" ,fResult);   

    return 0;
}