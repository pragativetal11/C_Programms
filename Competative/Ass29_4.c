/*
Accept character from user and check whether it is small character or not
Inputt = A
output = false

Input = a
output = true

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case character");
    }
    else
    {
        printf("It is not a Small case character");
    }

    return 0;
}