/*
    problems on string
    Display frequncy of capital letters
*/

#include<stdio.h>

int CountCapital(const char *str)            
{
   int iCount = 0;

   while (*str != '\0')
   {
        if(*str >= 'A' && *str <= 'Z')   
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

    iRet  = CountCapital(Arr);  
    printf("Frequency  of small character is : %d\n",iRet);     

    return 0;
}