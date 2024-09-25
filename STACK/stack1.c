// Write a program using C to implement stack operations.
// (PUSH, POP, PEEK, DISPLAY)
// Push(6)
// Push (7)
// Push(8)
// Push(5)
// Push(3)
// Pop
// Push(10)
// Pop Pop


#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int STACK[MAX], TOP = -1;
void push()
{
    int x;
    if (TOP == MAX - 1)
        printf("STACK OVERFLOW!!!\n");
    else
    {
        TOP += 1;
        printf("enter the element to be insert :");
        scanf("%d", &x);
        STACK[TOP] = x;
    }
    printf("\n");
}
int pop()
{
    int x;
    if (TOP == -1)
        printf("STACK UNDERFLOW!!!\n");
    else
    {
        x = STACK[TOP];
        TOP -= 1;
        printf("DELETED ELEMENT IS :%d\n", x);
    }
    printf("\n");
}
void peek()
{
    if (TOP == -1)
        printf("STACK IS EMPTY\n");
    else
        printf("TOP ELEMENT IS %d\n", STACK[TOP]);
    printf("\n");
}
void display()
{
    if (TOP != -1)
    {
        for (int i = 0; i <= TOP; i++)
        {
            printf("|_%d_|\n", STACK[i]);
        }
    }
    else
    {
        printf("STACK IS EMPTY!!!\n");
    }
    printf("\n\n");
}

int main()
{
    int n;
    while (1)
    {
        printf("\n");
        printf("=====================================\n");
        printf("=     1.PUSH ELEMENT                =\n");
        printf("=     2.POP ELEMENT                 =\n");
        printf("=     3.(PEEK) SEE THE TOP ELEMENT  =\n");
        printf("=     4.DISPLAY OF STACK            =\n");
        printf("=     5.EXIT                        =\n");
        printf("=====================================");
        printf("\n");

        printf("CHOOSE ANY OPERATION: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("INVALID OPERATION.\n");
        }
    }
}