/*
    count NUmber of Small letters

    input :- Hello
    output :- 4

*/


#include<stdio.h>

int CountSmall(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
       if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);
    printf("Capital Letters are :%d\n",iRet);

    return 0;
}



