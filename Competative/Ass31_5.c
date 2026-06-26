/*
    Check string which contains vowels or not character
    input = marvellous
    output = TRUE

    input = xyz
    output = FALSE

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while (*str != '\0')
    {
        str++;
    }

    str--;
    while (start <= str)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
    
}

int main()
{
    char arr[50] = {'\0'};
    
    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}

