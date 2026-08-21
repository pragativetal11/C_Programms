/*
    write recursive function and display below pattern

    input : 523
    output: 30
*/

#include<stdio.h>

int Max(int iNo)
{
    int iDigit = 0;
    static int iLarge = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iLarge)
        {
            iLarge = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iLarge;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Largest Number is : %d\n",iRet);

    return 0;
}