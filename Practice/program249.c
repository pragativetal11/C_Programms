/*
    problems on string
    Display character using pointer
*/

#include<stdio.h>

int strlenX(const char *str)            //vimp
{
   int iCount = 0;

   while (*str != '\0')
   {
        iCount++;
        str++;            
   }
   return iCount;
   
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);            

    iRet  = strlenX(Arr);  
    printf("Size of String is : %d\n",iRet);     

    return 0;
}