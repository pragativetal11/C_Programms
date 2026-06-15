/*
    START
        Accept number as No
        If No is Completely divisible by 2
            then print Even
        otherwise
            print Odd 
    STOP


    START
        Accept number as No
        Divide No by 2
        if Remainder is 0
            then print as Even
        otherwise
            print as Odd
    Stop
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}