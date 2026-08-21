/*
    Accept number from user and off the position if it is on
*/

#include<stdio.h>

typedef unsigned int UINT;

//Position = 4
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid bit Position\n");
        return iNo;                     
    }
    iMask = iMask << (iPos - 1);

    iMask = ~iMask;
    
    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter the bit position :\n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue, iLocation);
    printf("Updated Number is : %d\n", iRet);

    return 0;
}