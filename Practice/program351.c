/*
    Foundation of LInked List

    Display size of structure
*/

#include<stdio.h>

struct  Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node obj;

    printf("%d\n",sizeof(obj));         //16(Weastage of memory)
    //4(integer) + 4(padding) + 8(pointer)

    return 0;
}