/*
    Accept number from user and off 13th position if it is On
*/

#include<stdio.h>

typedef unsigned int UINT;


int main()
{
    UINT iMask = 0xFFFFEFFF;
    UINT iNo = 0;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number : %d\n",iNo);
    
    return 0;
}