#include <stdio.h>

void reverse() {
    int n, reversed = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number is %d\n", reversed);
}

