/*

    Display frequncy of space
*/

#include<stdio.h>

int CountSpace(char *str)            
{
   static int iCount = 0;

   if (*str != '\0')
   {
        if(*str == ' ')   
        {
            iCount++;
        }
        str++; 
        CountSpace(str);           
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
    printf("Number of WhiteSpace is : %d\n",iRet);     

    return 0;
}