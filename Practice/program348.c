/*
    Accept number and toggle 3rd and 8th position
*/

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask1 = 0x00000004;
    UINT iMask2 = 0x00000080;
    UINT iMask = 0;

    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = iMask1 | iMask2;            //using BItwise OR

    iResult = iNo ^ iMask;

    printf("Updated Number: %d\n", iResult);
    
    return 0;
}