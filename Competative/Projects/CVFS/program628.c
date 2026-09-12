#include<stdio.h>

int main()
{
    int iRet = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter 3 numbers : \n");
    iRet = scanf("%d %d %d",&i, &j, &k);

    printf("value of iRet is : %d",iRet);

    return 0;
}