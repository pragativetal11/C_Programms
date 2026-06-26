/*
    input = R
    output = r

    input = 4
    output = 4

*/

#include<stdio.h>

void Display(char ch)
{
    int iCount = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCount = ch; iCount <= 'Z'; iCount++)
        {
            printf("%c\t",iCount);
        }   
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCount = ch; iCount <= 'z'; iCount++)
        {
            printf("%c\t",iCount);
        } 
    }
    else
    {
        printf("Invalid Input\n");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

