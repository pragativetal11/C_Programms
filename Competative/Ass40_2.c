/*
    Return position of first occuerence
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

int FirstOccur(PNODE first, int iNo)
{
    int iIndex = 0;

    iIndex = 1;

    while (first != NULL)
    {
        if(first -> data == iNo)
        {
            return iIndex;
        }
        iIndex++;
        first = first -> next;
    }
    return 0;
}

int main()
{
    PNODE head  = NULL;
    int iRet = 0;

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

    Display(head);

    iRet = FirstOccur(head, 1);
    printf("1st Position of node : %d\n",iRet);

    if(iRet == 0)
    {
        printf("Number is not present\n");
    }

    return 0;
}