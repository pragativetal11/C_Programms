/*
    write recursive function and display below pattern

    input : 523
    output: 30
*/

#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    static int iSum = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Multiplication is : %d\n",iRet);

    return 0;
}