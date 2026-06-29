//Addition of array elements

#include<stdio.h>

int Summation(int Arr[], int iSize)        
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 4;
    int iCnt = 0;
    int iRet = 0;

    int Brr[iLength];     
    
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    

    iRet = Summation(Brr,iLength);
    printf("Addition is : %d\n", iRet);

    return 0;
}
