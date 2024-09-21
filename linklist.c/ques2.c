#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *prev, *p, *start = NULL;

void create()
{
    int n;
    printf("ENTER THE NO. OF NODES YOU WANT TO INSERT: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        p = malloc(sizeof(struct node));
        printf("ENTER THE DATA IN %d NODE: ", i);
        scanf("%d", &p->data);
        p->next = NULL;
        if (start == NULL)
            start = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("\nLINKED LIST IS CREATED SUCESSFULLY.\n\n");
}

void traverse(struct node *p)
{
    if (p == NULL)
    {
        printf("\nLIST IS EMPTY\n\n");
        return;
    }
    printf("\n");
    for (int i = 1; p != NULL; i++)
    {
        printf("THE DATA IN %d NODE IS : %d\n", i, p->data);
        p = p->next;
    }
    printf("\n");
}

void insbeg()
{
    struct node *q;
    q = malloc(sizeof(struct node));
    printf("ENTER THE DATA TO INSERTED: ");
    scanf("%d", &q->data);
    q->next = start;
    start = q;
    printf("\nNODE INSERTED SUCESSFULLY.\n\n");
}

void insany(struct node *x)
{
    if (x == NULL)
    {
        printf("\nCREATE LINKED LIST FIRST\n\n");
        return;
    }

    int n;
    struct node *q;
    q = malloc(sizeof(struct node));
    printf("ENTER AFTER WHICH DATA YOU WANT TO INSERT: ");
    scanf("%d", &n);
    printf("ENTER THE DATA TO INSERTED: ");
    scanf("%d", &q->data);
    while (x != NULL)
    {
        if (x->data == n)
        {
            q->next = x->next;
            x->next = q;
            printf("\nNODE INSERTED SUCESSFULLY.\n\n");
            return;
        }
        x = x->next;
    }
    printf("\nNODE NOT FOUND.\n\n");
}

void insend()
{
    struct node *q;
    q = malloc(sizeof(struct node));
    printf("ENTER THE DATA TO INSERTED: ");
    scanf("%d", &q->data);
    if (start == NULL)
    {
        q->next = start;
        start = q;
    }
    else
    {
        p->next = q;
        q->next = NULL;
    }
    printf("\nNODE INSERTED SUCESSFULLY.\n\n");
}

void insert()
{
    int n;
    printf("\n**\n");
    printf("*          1. INSERTION AT BEGINING              *\n");
    printf("*          2. INSERTION AT ANY POSITION          *\n");
    printf("*          3. INSERTION AT THE END               *\n");
    printf("\n");
    printf("WHICH TYPE OF INSETION U WANT TO USE: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        insbeg();
        break;
    case 2:
        insany(start);
        break;
    case 3:
        insend();
        break;
    default:
        printf("INVALID INPUT\n");
        break;
    }
}

void delbeg()
{
    if (start == NULL)
    {
        printf("\nCREATE LINKED LIST FIRST.\n\n");
        return;
    }
    struct node *temp = start;
    start = start->next;
    free(temp);
    printf("\nNODE DELETED SUCESSFULLY.\n\n");
}


void delend(struct node *temp)
{
    if (temp == NULL)
    {
        printf("\nLIST IS EMPTY\n");
        return;
    }
    if (temp->next = NULL)
    {
        free(temp);
        start = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    printf("\nNODE DELETED SUCESSFULLY.\n\n");
    free(temp->next);
    temp->next = NULL;
}

void delany(struct node *x)
{
    int n;
    struct node *temp;
    printf("ENTER THE DATA YOU WANT TO DELETE: ");
    scanf("%d", &n);
    if (x == NULL)
    {
        printf("\nCREATE LINKED LIST FIRST.\n\n");
        return;
    }
    while (x != NULL)
    {
        if (x->next->data == n)
        {
            temp = x->next;
            x->next = x->next->next;
            free(temp);
            printf("\nNODE DELETED SUCESSFULLY.\n\n");
            return;
        }
        else if (start->data == n)
        {
            delbeg();
            return;
        }
        else if (x->next == NULL && x->data == n)
        {
            delend(start);
            return;
        }
        else
        x = x->next;
    } 
}

void delete()
{
    int n;
    printf("\n**\n");
    printf("*          1. DELETION AT BEGINING               *\n");
    printf("*          2. DELETION AT ANY POSITION           *\n");
    printf("*          3. DELETION AT THE END                *\n");
    printf("\n");
    ;
    printf("WHICH TYPE OF DELETION YOU WANT TO USE: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        delbeg();
        break;
    case 2:
        delany(start);
        break;
    case 3:
        delend(start);
        break;
    default:
        printf("INVALID INPUT\n");
        break;
    }
}

void searching(struct node *p, int n)
{
    for (int i = 1; p != NULL; i++)
    {
        if (p->data == n)
        {
            printf("DATA FOUND:\n");
            printf("DATA : %d\nIN NODE : %d\nADDRESS : %d\n", p->data, i, p);
            return;
        }
        else
            p = p->next;
    }
    printf("DATA NOT FOUND!!!\n");
}

int main()
{
    int n, x;
    while (1)
    {
        printf("\n");
        printf("*          1. CREATION OF A LINKED LIST          *\n");
        printf("*          2. INSERTION OF A NODE                *\n");
        printf("*          3. DELETION OF A NODE                 *\n");
        printf("*          4. TRAVESING OF A LINKED LIST         *\n");
        printf("*          5. SEARCHING OF A NODE                *\n");
        printf("*          6. EXIT                               *\n");
        printf("\n");
        printf("ENTER OPERATION NUMBER: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete ();
            break;
        case 4:
            traverse(start);
            break;
        case 5:
            printf("ENTER THE DATE YOU WANT TO SEARCH: ");
            scanf("%d", &x);
            searching(start, x);
            break;
        case 6:
            exit(0);
        default:
            printf("INVALID INPUT.\n");
            break;
        }
    }
}