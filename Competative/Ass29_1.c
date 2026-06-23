/*
Accept character from user and check whether it is aphabet or not(A-Z a-z)
Inputt = a
output = It is character

Input = 7
output = It is not chracter

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
    {
        return 1;
    }
    else
    {
            return 0;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the chracter : \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not Character");
    }

    return 0;
}