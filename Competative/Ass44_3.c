/*
    display below pattern using Recurssion
    input = 5

    5   4   3   2   1
*/

#include<stdio.h>

void Display(int iNo)
{
    if (iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        Display(iNo);
    }
    
}

int main()
{
    int ivalue = 0;

    printf("Enter Number: \n");
    scanf("%d",&ivalue);

    Display(ivalue);
    
    return 0;
}