/*
    Accept number and toggle 21rd and 27th position
*/

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x4100000;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number: %d\n", iResult);
    
    return 0;
}