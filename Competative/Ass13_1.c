/*
    Accept N numbers from user and return difference between 
    summation of even elements and sumaation of odd elements

    Input:- N = 6
    Elements = 85   66  3   80  93  88
    OUTPUT:-  53
*/


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int Difference = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("ENter number of elements :\n");
    scanf("%d", &iSize);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter Elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p, iSize);
    printf("Difference between even and odd elemnts: %d\n", iRet);

    return 0;
}