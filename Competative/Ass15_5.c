/*
    Accept Numbers and return product of all odd elements

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMul = 0;

    iMul = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iMul = iMul * Arr[iCnt];
    }
    return iMul;
}

int main()
{
    int iSize = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter number of elemnts:\n");
    scanf("%d",&iSize);

    Brr = (int*)malloc(iSize*sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter Elements: \n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Product(Brr, iSize);
    printf("Multiplication is : %d\n",iRet);

    return 0;
}