/*
    problems on string
    counts number of characters in string
*/

#include<stdio.h>
#include<string.h>      //in-built header file

int main()
{
    char str[] ="Jay Ganesh";
    int iRet = 0;

    iRet  = strlen(str);        //it counts the characters only
    
    printf("Length of String is : %d\n",iRet); 

    return 0;
}