/*
    display below pattern using Recurssion
    a   b   c   d   e   f
*/

#include<stdio.h>

void Display()
{
    static char iSize  = 'f';
    static char i = 'a';

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