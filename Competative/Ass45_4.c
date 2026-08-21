/*
    write recursive function and display below pattern

    input : 5
    output: 120
*/

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;
    static int i = 1;

    if(i <= iNo)
    {
        iFact = i * iFact;
        i++;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}