/*
    write recursive function and display below pattern
    (Smallest Digit)
    input : 38642
    output: 2
*/

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse Number is : %d\n",iRet);

    return 0;
}