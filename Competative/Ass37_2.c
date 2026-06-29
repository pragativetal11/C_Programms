/*
    accept number and position and and off that bit

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ChkBit(UINT iNo, UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        return iNo;
    }

    UINT iMask = 0x1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    printf("Enter Location :\n");
    scanf("%u",&iLocation);

    iRet = ChkBit(iValue, iLocation);
    printf("MOdified Number is: %u\n",iRet);

    return 0;
}