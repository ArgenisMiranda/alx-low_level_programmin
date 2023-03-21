#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 50; // number of Fibonacci numbers to print
    long int fib1 = 1, fib2 = 2, next; // initialize the first two Fibonacci numbers
    
    printf("%ld, %ld, ", fib1, fib2); // print the first two Fibonacci numbers
    
    for (int i = 3; i <= n; i++) {
        next = fib1 + fib2; // calculate the next Fibonacci number
        printf("%ld", next); // print the next Fibonacci number
        if (i < n) {
            printf(", "); // print a comma and space after each number (except the last)
        }
        fib1 = fib2; // update the previous two Fibonacci numbers
        fib2 = next;
    }
    printf("\n"); // print a newline character at the end
    
    return 0;
}
