/*
    Count how many times a number apears.
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

void Display(PNODE first)
{
    while ((first != NULL))
    {
        printf("| %d | -> ",first -> data);
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

int Frequency(PNODE first, int iNo)
{
    int iCount  = 0;
    while(first != NULL)
    {
        if(first -> data == iNo)
        {
            iCount++; 
        }
        first = first -> next;
    }
    return iCount;
}

int main()
{
    PNODE head  = NULL;
    int bRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);
    InsertLast(&head,150);
    InsertLast(&head, 101);

    Display(head);

    bRet = Frequency(head, 101);
    printf("Number appears : %d times\n", bRet);

    return 0;
}