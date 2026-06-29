/*
    accept number and position and check whether 9th or 12th bit is on or off.
*/

#include<stdio.h>

typedef int BOOL; 
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CountOne(UINT iNo)
{
    UINT iMask = 0x900;

    if((iNo & iMask) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = 0;

    printf("Enter Number :\n");
    scanf("%u",&iValue);

    bRet = CountOne(iValue);
    
    if (bRet == TRUE)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("Both 9th and 12th bits are OFF\n");
    }

    return 0;
}