/*
    accept number and position and display position of common ON bits from that number
*/

#include<stdio.h>

typedef unsigned int UINT;


void CountOne(UINT iNo1, UINT iNo2)
{
    UINT iIndex = 0;

    while (iNo1 != 0 || iNo2 != 0)
    {
        if((iNo1 & 1) && (iNo2 & 1))
        {
            printf("Common ON bits are : %d\n",iIndex);
        }
        iIndex++;

        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue1);

    printf("Enter Number :\n");
    scanf("%u",&iValue2);

    CountOne(iValue1, iValue2);

    return 0;
}