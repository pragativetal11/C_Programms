/*
    display below pattern using Recurssion
    input = 5

    *       *       *       *       *
*/

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if (i <= iNo)
    {
        printf("*\t");
        i++;
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