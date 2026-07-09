/*
    Problems on string
    reverse string
*/

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;  
    end = str;
    
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end--;
    } 
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    printf("Updated string is : %s\n", Arr);

    return 0;
}

//time complecity = 0(2N)