/*
    problems on string
     prints length of string using pointer(Iteration) and using function strlen
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh";        //char str[] = "Ganesh";
    int iCount  = 0;

    printf("Length of string is : %lu\n",strlen(str));      //6

   while (*str != '\0')
   {
        iCount++;
        str++;
   }

    printf("Length of string is : %d\n",iCount);            //6     

    return 0;
}