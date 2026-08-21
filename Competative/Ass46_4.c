/*
    write recursive function and display below pattern
    (Smallest Digit)
    input : 38642
    output: 2
*/

#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    static int iSmall = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iSmall > iDigit)
        {
            iSmall = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iSmall;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Smallest Number is : %d\n",iRet);

    return 0;
}