#include <stdio.h>

int main() {
    int num[10], i, j, temp;

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 9; i++) { 
        for (j = 0; j < 9 - i; j++) { 
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("The numbers in ascending order are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", num[i]);
    }

    printf("\nThe numbers in descending order are:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\t", num[i]);
    }

    return 0;
}
