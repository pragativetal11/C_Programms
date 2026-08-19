/*
    display below pattern using Recurssion
    5   4   3   2   1
*/

#include<stdio.h>

void Display()
{
    static int iSize  = 1;
    static int i = 5;

    if (i >= iSize)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
    
}

int main()
{
    Display();
    
    return 0;
}