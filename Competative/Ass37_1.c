/*
    accept number and position and check at that position bit is on

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }

    UINT iMask = 0x1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    BOOL bRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Location :\n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue, iLocation);

    if(bRet == 1)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is Off");
    }

    return 0;
}