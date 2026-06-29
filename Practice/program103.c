//CallBYAddress funtion call(pointer)

#include<stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);

    printf("Value After funtion call : %d\n", iValue);
    
    return 0;
}
