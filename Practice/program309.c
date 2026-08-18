/*
    problems on Bit-wise operator
    check whether 3rd bit is on or off(using unsigend int)
                         
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;             //due to signed bit is revered for negative number
    unsigned int iAns  = 0;

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