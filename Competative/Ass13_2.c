/*
    Accept N numbers from user and display elements which are divisible by 5

    Input:- N = 6
    Elements = 85   66  3   80  93  88
    OUTPUT:-  85 80
*/


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("Elements which are divisible by 5 : %d\n",Arr[iCnt]);
        }
    }
}

int main()
{
   int iLength = 0;
   int iCnt = 0;
   int iRet = 0;

   int *Brr = NULL;

   printf("Enter Number of Elements : \n");
   scanf("%d",&iLength);

    Brr = (int*) malloc(iLength * sizeof(int));

    printf("Enter Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr, iLength);

    free(Brr);

    return 0;
}