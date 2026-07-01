/*
    Accept N numbers from user and accept one another number as No, return frequency of No form it.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;   
}

int main()
{
    int iSize = 0, iValue = 0;
    int *Brr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter NUmber of Elements :\n");
    scanf("%d",&iSize);

    Brr = (int*)malloc(iSize*sizeof(int));

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Elements: \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr,iSize, iValue);
    printf("Frequency of Number is : %d\n",iRet);
    
    free(Brr);

    return 0;
}