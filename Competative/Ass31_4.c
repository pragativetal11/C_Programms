/*
    Check string which contains vowels or not character
    input = marvellous
    output = TRUE

    input = xyz
    output = FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            {
                iCount++;
            }
        str++;
    }

    if(iCount > 0)
    {
        return 1;
    }
}

int main()
{
    char arr[50] = {'\0'};
    bool bRet = false;
    
    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("String contains Vowels");
    }
    else
    {
        printf("String does not contain Vowels");
    }

    return 0;
}

