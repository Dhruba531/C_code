
#include <stdio.h>

// Function to calculate Fibonacci using recursion
int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Function to calculate Fibonacci using iteration
int fibonacciIterative(int n) {
    int a = 0, b = 1, temp, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci series is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci number at position %d (using recursion) is: %d\n", n, fibonacciRecursive(n));
        printf("Fibonacci number at position %d (using iteration) is: %d\n", n, fibonacciIterative(n));
    }

    return 0;
}
