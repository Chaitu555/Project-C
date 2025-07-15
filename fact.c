#include <stdio.h>

void fact() {
    int n, i;
    unsigned long long result = 1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        result *= i;
    printf("Factorial of %d is %llu\n", n, result);
}

