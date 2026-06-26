/*
    Check special character
    input = %
    output = TRUE

    input = f
    output = FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if((ch >= 33 && ch <= 47) ||
        (ch >= 58 && ch <= 64) ||
        (ch >= 91 && ch <= 96) ||
        (ch >= 123 && ch <= 126)
    )
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
    bool bRet = false;
    
    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("it is not special character");
    }

    return 0;
}

