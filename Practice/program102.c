//CallByValue FUntion

#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);

    printf("Value After funtion call : %d\n", iValue);
    
    return 0;
}
