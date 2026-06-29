/*
    accept number and position and count number of ON(1) bits in it without using % and / oprator
*/

#include<stdio.h>

typedef unsigned int UINT;


UINT CountOne(UINT iNo)
{
    UINT iMask = 0x1;
    UINT iCount = 0;

    while (iNo != 0)
    {
        if(iNo & (iMask == 1))          //(iNO & 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);
    printf("Number of ON bits are: %u\n",iRet);

    return 0;
}