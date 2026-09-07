/*
    Foundation od LInked List

    Direct memory allocation of structure created linked list
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
    struct Node obj1, obj2;
    
    obj1.data = 11;
    obj1.next = &obj2;                

    obj2.data = 21;
    obj2.next = NULL;

    printf("%d\n",obj1.data);
    printf("%d\n",obj2.data);
    
    return 0;
}