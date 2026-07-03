/*
    Accept N numbers frm user and another number and check whether number is present or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
    
}

int main()
{
    int iSize = 0, iValue = 0;
    int *Brr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter NUmber of Elements :\n");
    scanf("%d",&iSize);

    Brr = (int*)malloc(iSize*sizeof(int));

    printf("Enter Element: \n");
    scanf("%d",&iValue);

    printf("Enter Elements: \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = FirstOcc(Brr,iSize, iValue);
    
    if(iRet < 0)
    {
        printf("Number is Not Present\n");
    }
    else
    {
        printf("Number is Present at Index: %d\n",iRet);
    }

    free(Brr);

    return 0;
}