/*
    Check whether a number is present
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool Search(PNODE first, int iNo)
{
    while(first != NULL)
    {
        if(first -> data == iNo)
        {
            return true;
        }
        first = first -> next;
    }
}

int main()
{
    PNODE head  = NULL;
    int iValue = 0;
    bool bRet = false;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    printf("Enter Number to search :\n");
    scanf("%d",&iValue);

    bRet = Search(head,iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    return 0;
}