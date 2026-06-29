/*
    accept number and position and check whether it at first or second position is ON or OFF.
*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    if((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0, iLocation2 = 0;
    BOOL bRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    printf("Enter Position 1 :\n");
    scanf("%u",&iLocation1);

    printf("Enter Position 2 :\n");
    scanf("%u",&iLocation2);

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == TRUE)
    {
        printf("1st or 2nd position bit is ON");
    }
    else
    {
        printf("1st or 2nd position bit is OFF");
    }

    return 0;
}