//SUm of Even elemnts

#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of Elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Array Elemnts : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = SumEven(Brr, iLength);
    printf("Summation of Even Elements are : %d", iRet);

    free(Brr);

    return 0;
}