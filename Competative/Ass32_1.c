/*
    LOWER case
    input := HEllo
    output :- hello
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while (*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}