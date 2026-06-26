/*
    Count Capital letters

    input := HEllo
    output :- 2

*/


#include<stdio.h>

int CountCapital(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
       if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);
    printf("Capital Letters are :%d\n",iRet);

    return 0;
}



