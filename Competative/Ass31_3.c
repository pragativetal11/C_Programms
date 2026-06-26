/*
    return difference between frequency of small character and capital characters

    input :- MarvellOS

    output:- 5

*/


#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while (*str != '\0')
    {
       if(*str >= 'A' && *str <= 'Z')
       {
            iCountCapital++;
       }
       else if (*str >= 'a' && *str <= 'z')
       {
             iCountSmall++;
       }
       str++;
    }

        if(iCountSmall > iCountCapital)
    {
        return iCountSmall - iCountCapital;
    }
    else
    {
        return iCountCapital - iCountSmall;
}
    
}

int main()
{
    char arr[] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("Difference between Capital and small character frequency : %d\n",iRet);

    return 0;
}



