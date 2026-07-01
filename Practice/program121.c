//Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;

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
    Display(Brr ,iLength);

    //Step 5: Deallocate the memory
    free(Brr);

    return 0;
}