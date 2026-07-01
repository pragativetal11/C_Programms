//Chck Number is present or not(Searching) = actual logic

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }   
    
    if(iCnt < iSize )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iValue = 0;
    int iCnt = 0;
    bool bRet = 0;

    printf("Enter number of Elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Array Elemnts : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is Present\n");
    }
    else
    {
        printf("Element is Not present\n");
    }
    

    free(Brr);

    return 0;
}