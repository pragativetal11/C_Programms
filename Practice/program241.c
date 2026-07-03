/*
    problems on string
    accepts string from user
*/

#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);            //Regular expression(rejects)

    printf("Enter string is : %s\n",Arr);

    return 0;
}