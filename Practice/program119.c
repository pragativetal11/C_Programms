//Dynamic memory allocation

#include<stdio.h>
//Error due to stdlib.h

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
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    //Step 4: Use the Memory (Logic)


    //Step 5: Deallocate the memory
    free(Brr);

    return 0;
}