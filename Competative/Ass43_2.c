/*
    display below pattern using Recurssion
    1   2   3   4   5
*/

#include<stdio.h>

void Display()
{
    static int iSize  = 5;
    static int i = 1;

    if (i <= iSize)
    {
        printf("%d\t",i);
        i++;
        Display();
    }
    
}

int main()
{
    Display();
    
    return 0;
}