/*
VVIMP
    problems on Bit-wise operator
    check whether 3rd bit is on or off(using unsigend int)
                         
*/

#include<stdio.h>

typedef unsigned int UINT;      //used to define type

int main()
{
    UINT iNo = 0;
    UINT iMask = 4;             
    UINT iAns  = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON\n");
    }
    else
    {
        printf("3rd bit is OFF\n");
    }

    return 0;
}