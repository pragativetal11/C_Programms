/*
    largest value of int in decimal and hexadecimal
*/

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    //Largest value of int
    UINT iMask = 0xFFFFFFFFF;            

    printf("%u\t%X\n",iMask,iMask);
    
    return 0;
}