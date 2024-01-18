#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,temp,sum=0;
    printf("Enter number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        r*r*r;
        sum=sum+r*r*r;
        n=n/10;
    }
    n=temp;
    if (n==sum)
    printf{"Armstrong"};
    else 
    printf("Not an Armstrong");
    getch();

}