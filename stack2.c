//Write a C program to implement a stack where elements will be pushed from the first position of the array.
// Example: Consider a scenario where a printer job queue is managed using a stack data structure. 
// The most recently added print jobs should be processed first, making it essential to push new print jobs to the front of the stack.

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
        printf("Enter the element to be insert :");
        scanf("%d", &x);
        STACK[TOP] = x;
    }
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
        printf("=     2.DISPLAY OF STACK            =\n");
        printf("=     3.EXIT                        =\n");
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
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("INVALID OPERATION.\n");
        }
    }
}