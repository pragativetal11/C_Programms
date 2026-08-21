/*
    write recursive function and display below pattern
    Count small characters
    input : Heki aFFR
    output: 4
*/

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n]s",arr);

    iRet = Small(arr);
    printf("Number of small characters : %d\n",iRet);

    return 0;
}