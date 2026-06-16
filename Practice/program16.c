#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;                                  //default value of false is 0
    printf("Enter number to check whether it is Even or Odd: ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even\n", iValue);
    }
    else
    {
        printf("%d is Odd\n", iValue);
    }

    return 0;
}