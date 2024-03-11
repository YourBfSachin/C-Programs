//Program to compute and print the sum of given numbers of squares.
#include<stdio.h>
int main()
{
    int sum=0,i=1,n;
    printf("Enter the no. of integers:");
    scanf("%d",&n);
    while (i<=n)
    
    {
        int a=0;
        printf("Enter the number_%d:",i);
        scanf("%d",&a);
        sum=sum+a*a;
        i=i+1;
    }
    printf("The sum of squared number is %d.",sum);
    return 0;
}