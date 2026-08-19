/*
    printing power of 2 upto 33(overflow)
*/

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 33; iCnt++)
    {
            printf("%d : %X\n",iCnt,iMask);           
            iMask = iMask << 1;
    }

    return 0;
}