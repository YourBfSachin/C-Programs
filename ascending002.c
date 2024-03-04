#include <stdio.h>

int main() {
    int num[10];
    int i, j, temp;

    // Input numbers
    for (i = 0; i < 10; i++) {
        printf("Enter number %d=", i + 1);
        scanf("%d", &num[i]);
    }

    // Sort numbers in descending order
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (num[j] < num[j + 1]) {  // Swap elements if the first is smaller
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // Print numbers in descending order
    printf("The numbers in descending order are:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", num[i]);
    }

    return 0;
}
