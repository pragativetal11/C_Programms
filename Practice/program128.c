//Chck Number is present or not(Searching)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;        //bad programming
        }
    }
    
    return false;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0;
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

    bRet = LinearSearch(Brr, iLength);

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