/*
    upper case
    input := Hello
    output :- HELLO
*/

#include<stdio.h>

void struprx(char *str)
{
    while (*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}