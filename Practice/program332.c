/*
    Accept number from user and toggle 28th bit 
*/

#include<stdio.h>

typedef unsigned int UINT;


int main()
{
    UINT iMask = 0;
    UINT iNo = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = 0x8000000;

    iNo = iNo ^ iMask;

    printf("Updated number : %d\n",iNo);
    
    return 0;
}