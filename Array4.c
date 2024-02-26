// Program to read an array containing positive integer number & count even and odd numbers.
#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter the numbers of integer to be entered:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number_%d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            count++;
        }
    }
    printf("The number of even numbers entered is %d and the numbers of odd numbers entered is %d.",count,n-count);
    return 0;
}