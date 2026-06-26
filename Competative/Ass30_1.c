//write a program to display ASCII table. table contains symbol, Decimal, Hexadecimal,
//octal representation of every member from 0 to 255.
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("=========================================\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}

/*
    %c = character and symbol
    %d = Decimal representation
    %x = Hexadicimal representation
    %o = Octal representation
*/