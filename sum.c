#include <stdio.h>

void sum() {
    int n, sum = 0;
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits is %d\n", sum);
}

