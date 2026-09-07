/*
    Foundation od LInked List

    Display size of structure with padding
*/

#include<stdio.h>
#pragma pack(1)

struct  Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node obj;

    printf("%d\n",sizeof(obj));         //12
    //4(integer) + 8(pointer)
    
    return 0;
}