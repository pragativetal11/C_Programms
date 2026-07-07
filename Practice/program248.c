/*
    problems on string
    Display character using pointer
*/

#include<stdio.h>

int strlenX(char *const str)            //Constant pointer
{
   int iCount = 0;

   while (*str != '\0')
   {
        iCount++;
        str++;              //Error
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