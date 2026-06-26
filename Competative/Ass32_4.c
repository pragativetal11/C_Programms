/*
    display digits from string
    input := Hello123
    output :- 123
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while (*str != 0)
    {
        if(*str >= '1' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}