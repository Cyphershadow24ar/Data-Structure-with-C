//Write a meanu driven c-code for the following operations on linear queue 
//using array. (i)Insertion (ii)Deletion (iii)Traversal

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int QUEUE[MAX], FRONT = -1, REAR = -1;
void Insertion()
{
    int x;
    if (REAR == MAX - 1)
    {
        printf("QUEUE OVERFLOW!!!\n");
        return;
    }
    if (REAR == -1 && FRONT == -1)
    {
        REAR = 0;
        FRONT = 0;
    }
    else
        REAR += 1;
    printf("ENTER THE ELEMENT : ");
    scanf("%d", &x);
    QUEUE[REAR] = x;
    printf("\n");
}

void Deletion()
{
    int x;
    if (FRONT == -1)
    {
        printf("QUEUE UNDERFLOW!!!\n");
        return;
    }
    if (FRONT == REAR)
    {
        FRONT = -1;
        REAR = -1;
    }
    else
        FRONT += 1;
    x = QUEUE[FRONT];
    printf("DELETED ELEMENT IS :%d\n", x);
    printf("\n");
}

void traverse()
{
    if (FRONT == -1)
        printf("QUEUE IS EMPTY\n");
    else
    {
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("| %d |", QUEUE[i]);
        }
    }
    printf("\n\n");
}

int main()
{
    int n;
    while (1)
    {
        printf("===============================\n");
        printf("=    1.INSERT ELEMENT         =\n");
        printf("=    2.DELETE ELEMENT         =\n");
        printf("=    3.TRAVERSE OF QUEUE      =\n");
        printf("=    4.EXIT                  =\n");
        printf("===============================\n");

        printf("CHOOSE ANY OPERATION: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            Insertion();
            break;
        case 2:
            Deletion();
            break;
        case 3:
            traverse();
            break;
        case 4:
            printf("THANK YOU.");
            exit(0);
        default:
            printf("INVALID OPERATION.\n");
        }
    }
}