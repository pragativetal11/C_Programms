/*
    display below pattern using Recurssion
    input = 6

    a   b   c   d   e   f
*/

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if (iNo >= 1)
    {
        printf("%c\t",ch);
        ch++;
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