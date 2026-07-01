//find out minimum number

#include<stdio.h>
#include<stdlib.h>

//Time Complexity = O(N)
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        } 
    }   
    return iMin;
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

    iRet = Minimum(Brr, iLength);

    printf("Minimun Element is : %d", iRet);
    
    free(Brr);

    return 0;
}