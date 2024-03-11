#include<stdio.h>
int main()
{
    int sum=0,i,rem,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of digits is %d.",sum);
    return 0;    
}