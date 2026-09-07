/*
    Foundation od LInked List

    Direct memory allocation of structure
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
    
    obj.data = 11;
    obj.next = NULL;                //Smallest linked list

    printf("%d\n",obj.data);
    
    return 0;
}