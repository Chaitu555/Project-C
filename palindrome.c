#include <stdio.h>

void palindrome() {
    int n, reversed = 0, original, digit;
    printf("Enter a number to check palindrome: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome!\n");
    else
        printf("Not a palindrome.\n");
}

