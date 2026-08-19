/*
    display below pattern using Recurssion
    A   B   C   D   E   F
*/

#include<stdio.h>

void Display()
{
    static char iSize  = 'F';
    static char i = 'A';

    if (i <= iSize)
    {
        printf("%c\t",i);
        i++;
        Display();
    }
    
}

int main()
{
    Display();
    
    return 0;
}