//You are provided with two stacks, POP ( and PUSH 0 functions for them, write a c-program to implement queue 
//i.e insert and delete operation using the available operations.
         
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int QUEUE[MAX], FRONT = -1, REAR = -1;
void PUSH()
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
    printf("enter the element to be insert :");
    scanf("%d", &x);
    QUEUE[REAR] = x;
    printf("\n");
}
void POP()
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
            printf("|%d|", QUEUE[i]);
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
        printf("=     1.INSERT ELEMENT        =\n");
        printf("=     2.DELETE ELEMENT        =\n");
        printf("=     3.TRAVERSE OF QUEUE     =\n");
        printf("=     4.EXIT                  =\n");
        printf("===============================\n");

        printf("CHOOSE ANY OPERATION: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            PUSH();
            break;
        case 2:
            POP();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("INVALID OPERATION.\n");
        }
    }
}