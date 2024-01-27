#include <stdio.h>

int main() {
    int n, rev = 0, r, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    c = n;  // Store the original number

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;  // Use integer division to avoid potential overflow
    }

    if (rev == c) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;  // Indicate successful execution
}
