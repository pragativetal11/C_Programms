/*
    Accept number from user and off 23th position if it is On
*/

#include<stdio.h>

typedef unsigned int UINT;


int main()
{
    UINT iMask = 0xFFBFFFFF;
    UINT iNo = 0;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number : %d\n",iNo);
    
    return 0;
}