/*
    accept number and on its 4th bits.return modified number.
*/

#include<stdio.h>

typedef unsigned int UINT;


UINT OnBit(UINT iNo)
{
    UINT iMask = 0x8;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}