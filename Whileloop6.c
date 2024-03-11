// Program to check whether a input number is prime or composite.
#include<stdio.h>
int main()
{
    int n,i=1,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    printf("The number %d is prime.",n);
    else
    printf("The entered %d is composite.",n);
    return 0;    
}