#include<stdio.h>

int main()
{
    char str[50];
    int iRet = 0;

    iRet = sprintf(str,"jay Ganesh...");

    printf("Value from iRet is : %d\n",iRet);

    printf("Data from str is : %s\n",str);

    return 0;
}