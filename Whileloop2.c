// Program to print even numbers up to n number using while loop.
#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    do
    {
        printf("%d \t",i);
        i=i+2;
    } while (i<=n);
    return 0;    
}