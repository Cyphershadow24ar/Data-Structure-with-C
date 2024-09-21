//WAP in c for inserting the values in the linklist.

//WAP a code in c to create and print a node in linklist.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *arev, *a, *start=NULL;

void create()
{
    int n;
    printf("Enter the No. of Nodes: ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)
    {
        a = malloc(sizeof(struct node));
        printf("Enter the date in the %d Node: ",i);
        scanf("%d",&a->data);
        a->next = NULL;
        if(start == NULL)
          start = a;
        else
           arev->next = a;
        arev = a;
    }
}

void print_linklist(struct node *a)
{
    for(int i=1; a!= NULL; i++)
    {
        printf("The DATA in %d NODE is: %d\n", i,a->data);
        a = a->next;
    }
}

void insertion_beg()
{
  struct node *a;
  a = malloc(sizeof(struct node));
  printf("Enter the dtae to be insterted: ");
  scanf("%d", &a->data);
  a->next = start;
  start =a;
}

// void insertion_any(){
//    int n;
//    struct node *a;
//    a = malloc(sizeof(struct node));
//    printf("Enter the Which data you want to insert: ");
//    scanf("%d",&n);
//    printf("Entert the data to be inserted: ");
//    scanf("%d", &a->data);
//    //while(x!=NULL)
//     {
//         if(x->data==n)
//         {
//             a->next=x->next;
//             x->next=a;
//             return;
//         }
//         x=x->next;
//     }
//     printf("NODE NOT FOUND!!!");
// }

int main()
{
    int n,x;
    while(1){
        printf("1.Creation of a linked list\n");
        printf("2.Print the Linklist\n");
        printf("3.exit\n");
        printf("Enter the Operation Number: ");
        scanf("%d", &n);
        switch(n){
            case 1:
            create();
            break;
            case 2:
             print_linklist(start);
             break;
            case 3:
             exit(0);
             default:
             printf("INVALID INPUT.\n");
             break;
        }
    }
}