#include<stdio.h>

int main()
{
    int n,r,temp,sum=0;
    printf("Enter number=");
    scanf("%d",&n);
    temp=n;
    if (n == 0) sum = 0; // handle the case when n is zero
    while(n>0)
    {
        r=n%10;
        // r*r*r; // this line has no effect, you can remove it or assign the result to r
        sum=sum+r*r*r;
        n=n/10;
    }
    n=temp;
    if (n==sum)
    printf("Armstrong\n"); // use parentheses instead of curly braces, and add a newline character
    else 
    printf("Not an Armstrong\n"); // add a newline character
    return 0;
}
