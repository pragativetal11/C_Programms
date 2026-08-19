/*
    Accept number from user and toggle 4th bit 
*/

#include<stdio.h>

typedef unsigned int UINT;


int main()
{
    UINT iMask = 0;
    UINT iNo = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = 0x00000008;

    iNo = iNo ^ iMask;

    printf("Updated numbera : %d\n",iNo);
    
    return 0;
}