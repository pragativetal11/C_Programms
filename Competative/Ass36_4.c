/*
    check whether 1st and 32th(first and last bit) and 9th bit is on
*/

#include<stdio.h>

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x240;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}