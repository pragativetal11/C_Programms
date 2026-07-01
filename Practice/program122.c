//Dynamic memory allocation = Addtion of Array elements

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    //Step1 :-Accepts the Number of Elements
    printf("Enter Number of Elements : \n");
    scanf("%d", &iLength);

    //Step 2: Allocate the memory
    Brr = (int*)malloc(iLength * sizeof(int));

    //Step 3: Accepts the values from User
    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    //Step 4: Use the Memory (Logic)
    iRet = Summation(Brr ,iLength);
    printf("Addition is : %d\n", iRet);

    //Step 5: Deallocate the memory
    free(Brr);

    return 0;
}