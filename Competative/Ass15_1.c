/*
    Accept N numbers frm user and another number and check whether number is present or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iValue = 0;
    int *Brr = NULL;
    int iCnt = 0;
    bool bRet = false;

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

    bRet = Check(Brr,iSize, iValue);
    
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(Brr);

    return 0;
}