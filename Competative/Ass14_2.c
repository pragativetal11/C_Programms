/*
    Accept N numbers frm user and return difference 
    between frequency of even number and odd numbers.
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt  = 0,iCountEven = 0, iCountOdd = 0;

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return iCountEven - iCountOdd;
}

int main()
{
    int iSize = 0;
    int *Brr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter NUmber of Elements :\n");
    scanf("%d",&iSize);

    Brr = (int*)malloc(iSize*sizeof(int));

    printf("Enter Elements: \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr,iSize);
    printf("Difference between frequency of even numbers and odd numbers: %d\n",iRet);

    free(Brr);

    return 0;
}