/*
    Accept N numbers frm user and return frequnecy of even numbers
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt  = 0,iCount = 0;

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountEven(Brr,iSize);
    printf("Frequency of Even Elements: %d\n",iRet);

    free(Brr);

    return 0;
}