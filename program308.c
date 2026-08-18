/*
    problems on Bit-wise operator
    check whether 3rd bit is on or off
                         
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;          //due to 3rd bit
    int iAns  = 0;

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