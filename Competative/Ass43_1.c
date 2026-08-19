/*
    display below pattern using Recurssion
    *   *   *   *   *
*/

#include<stdio.h>

void Display()
{
    static int iSize  = 5;
    static int i = 0;

    if (i != iSize)
    {
        printf("*\t");
        i++;
    }
    Display();
    
}

int main()
{
    Display();
    
    return 0;
}