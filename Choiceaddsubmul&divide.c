#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("1. Addition\n2. Multiplication\n");
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Addition is %d", a + b);
            break;
        case 2:
            printf("Multiplication is %d", a * b);
            break;
        default:
            printf("Invalid Choice");
            break;
    }
    return 0;
}
