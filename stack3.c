//Write a c program to find the reverse of a string using Stack.

#include <stdio.h>
#include <string.h>
char str[100];
int TOP = -1;
char pop(int i)
{
    char ch = str[TOP];
    printf("%c", ch);
    TOP -= 1;
}
int main()
{
    printf("ENTER STRING: ");
    scanf("%s", str);
    int l = strlen(str);
    TOP=l-1;
    printf("REVERSE STRING IS: ");
    for (int i = 0; i < l; i++)
    {
        pop(i);
    }
    return 0;
}

