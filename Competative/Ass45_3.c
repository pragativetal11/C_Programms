/*
    write recursive function and display below pattern

    input :HEllo
    output: 5
*/

#include<stdio.h>

int Strlen(char Brr[])
{
    static int i =0;
    static int iCount =0;

    if(Brr[i] != '\0')
    {
        iCount++;
        i++;
        Strlen(Brr);
    }
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Number of Character is : %d\n",iRet);

    return 0;
}