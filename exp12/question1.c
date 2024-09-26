#include<stdio.h>

#define MAX_SIZE 5
typedef struct {
int items[MAX_SIZE]; 
  int top; } Stack;  
int main()
{ 
 Stack stack; 
  stack.top = -1;
 push(&stack, 1); 
 push(&stack, 2); 
 pop(&stack);
 push(&stack, 3);
 push(&stack, 4);
  printf("%d\n", pop(&stack)); 
  return 0;
}
