/*
    write recursive function and display below pattern

    input : 879
    output: 24
*/

#include<stdio.h>

int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Summation(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}