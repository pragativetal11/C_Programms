/*
VVIMP
    problems on Bit-wise operator
    check whether bit is on or off
                         
*/

#include<stdio.h>

typedef unsigned int UINT;      //used to define type

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;             
    UINT iAns  = 0;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("Enter Position : \n");
    scanf("%d", &iPos);

    iMask = iMask << (iPos-1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n"); 
    }

    return 0;
}