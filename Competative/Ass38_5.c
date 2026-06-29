/*
    accept number and position and 
    range of posiition and toggle all bits from that range.
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0;
    UINT iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt -1));
    }
    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0, iLocation2 = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    printf("Enter Position 1 :\n");
    scanf("%u",&iLocation1);

    printf("Enter Position 2 :\n");
    scanf("%u",&iLocation2);

    iRet = ToggleBitRange(iValue, iLocation1, iLocation2);
    printf("Modified number is:%u\n",iRet);

    return 0;
}