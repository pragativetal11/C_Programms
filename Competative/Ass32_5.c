/*
    count white spaces
    input := Hello khds skhd
    output :- 2
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != 0)
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("Number of white spaces are :%d\n", iRet);

    return 0;
}