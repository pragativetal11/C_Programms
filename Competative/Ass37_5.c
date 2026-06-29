/*
    accept number and position and toggle contents of first and last nibble of the number
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);
    printf("MOdified Number is: %u\n",iRet);

    return 0;
}