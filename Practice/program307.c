/*
    problems on Bit-wise operator
    count number of 1 present in decimal number
                         
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    while (iNo != 0)
    { 
        iDigit = iNo % 2;
        iCount = iCount + iDigit;
        iNo = iNo / 2;
    }

    printf("Number of 1's are : %d\n",iCount);
    

    return 0;
}