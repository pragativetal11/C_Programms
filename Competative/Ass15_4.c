/*
    Accept Numbers and display elements from that range

*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iFlag = 0;

    printf("Elemnts are: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d\t",Arr[iCnt]);
            iFlag = 1;
        }
    }

    if(iFlag == 0)
    {
        printf("No element present in that range\n");
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0, iValue2 = 0;
    int *Brr = NULL;

    printf("Enter number of elemnts:\n");
    scanf("%d",&iSize);

    Brr = (int*)malloc(iSize*sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter Starting Point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: \n");
    scanf("%d",&iValue2);

    printf("Enter Elements: \n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Range(Brr, iSize, iValue1, iValue2);

    return 0;
}