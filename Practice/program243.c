/*
    problems on string
    String Passed to logic(funtion)
*/

#include<stdio.h>

void Display(char *str)
{
    printf("Input String is : %s\n",str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);            

    Display(Arr);       //does not reuired to pass size (in string size is defined by \0)

    return 0;
}