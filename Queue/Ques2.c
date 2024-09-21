#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int QUEUE[MAX], FRONT = -1, REAR = -1;

void CQINSERT()
{
    int x;
    if (FRONT == (REAR + 1) % MAX)
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
        REAR = (REAR + 1) % MAX;
    printf("Enter the element to be insert :");
    scanf("%d", &x);
    QUEUE[REAR] = x;
    printf("\n");
}

void CQDELETE()
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
    {
        x = QUEUE[FRONT];
        FRONT = (FRONT + 1) % MAX;
    }
    printf("DELETED ELEMENT IS :%d\n", x);
    printf("\n");
}

void traverse()
{
    if (FRONT == -1)
        printf("QUEUE IS EMPTY\n");
    else
    {
        if (FRONT <= REAR)
        {
            for (int i = FRONT; i <= REAR; i++)
            {
                printf("%d\t", QUEUE[i]);
            }
        }
        else
        {
            for (int i = FRONT; i < MAX; i++)
            {
                printf("%d\t", QUEUE[i]);
            }
            for (int i = 0; i <= REAR; i++)
            {
                printf("%d\t", QUEUE[i]);
            }
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
            CQINSERT();
            break;
        case 2:
            CQDELETE();
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