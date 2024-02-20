// Program to print fibonacci series up to given number of terms.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("%d \t %d",a,b);
    for(i=0;i<=n-2;i++)
    {
        c=a+b;
        printf("\t %d ",c);
        a=b;
        b=c;
    }
    return 0;
}