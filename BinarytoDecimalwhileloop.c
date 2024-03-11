#include<stdio.h>
int main()
{
    int n,r,d=0,base=1;
    printf("Enter the Binary No.:");
    scanf("%d",&n);
    int temp=n;
    while (n>0)
    {
        r=n%10;
        d=d+r*base;
        n=n/10;
        base=base*2;
    }
    printf("Decimal No of %d is %d.",temp,d);
    return 0;    
}