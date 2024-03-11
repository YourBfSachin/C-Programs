#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using for loop (optimized)
    printf("Odd numbers using for loop (optimized):\n");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // Using for loop (alternative)
    printf("Odd numbers using for loop (alternative):\n");
    for (int i = (n % 2 == 0) ? 2 : 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // Using while loop
    printf("Odd numbers using while loop:\n");
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    // Using do-while loop
    printf("Odd numbers using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= n);
    printf("\n");

    return 0;
}
