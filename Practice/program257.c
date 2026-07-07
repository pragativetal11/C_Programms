/*
    problems on string
    Display frequncy of space
*/

#include<stdio.h>

int CountSpace(const char *str)            
{
   int iCount = 0;

   while (*str != '\0')
   {
        if(*str == ' ')   
        {
            iCount++;
        }
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

    iRet  = CountSpace(Arr);  
    printf("Frequency  of small character is : %d\n",iRet);     

    return 0;
}