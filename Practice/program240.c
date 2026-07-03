/*
    problems on string
    accepts string from user(Issue)
*/

#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%s",Arr);            //issue(scanf by deafult accept data until first space occurs)

    printf("Enter string is : %s\n",Arr);

    return 0;
}