/*
    Problems on string
    Display string in reverse order
*/

#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;          //to remove '/0'
    while (start <= str)
    {
        printf("%c",*str);
        str--;
    }
    
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}

//time complecity = 0(2N)