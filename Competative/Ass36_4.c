/*
    accept number and toggle 7th and 10th bits.return modified number.
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