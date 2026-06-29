/*
    check whether 1st and 32th(first and last bit) and 9th bit is on
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x40;
    UINT iResult = 0;

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}