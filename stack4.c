//Write a C program to find the factorial of a number using
// Recursion.
// Example: In mathematics, the sum of the first N natural
// numbers can be found using the formula: sum = 1 + 2 + 3 + ...
// + N. We want to calculate the sum of the first N natural numbers using recursion.
// Consider the following value for N:
// N =5

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n; 
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    int result;

    result = factorial(n);

    printf("FACTORIAL OF %d IS: %d\n", n, result);

    return 0;
}
