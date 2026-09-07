/*
    print only odd elements
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void DisplayOdd(PNODE first)
{
    while ((first != NULL))
    {
        if(first -> data % 2 != 0)
        {
            printf("| %d | -> ",first -> data);
        } 
        first = first -> next;
    }
    printf("NUll\n");
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

int main()
{
    PNODE head  = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head,22);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);
    InsertLast(&head,150);
    InsertLast(&head, 101);
    InsertLast(&head,188);

    DisplayOdd(head);

    return 0;
}