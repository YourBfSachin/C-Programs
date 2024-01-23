// Program to check smallest number among any three.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("The smallest number=%d", a);
    }
    else if(b<c)
    {
        printf("The smallest number=%d", b);
    }
    else
    {
        printf("The smallest number=%d", c);
    }
    getch();
}
