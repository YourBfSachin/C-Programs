#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter the no. of integers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    {
        int a=0;
        printf("Enter the number_%d:",i);
        scanf("%d",&a);
        sum=sum+a*a;
    }
    printf("The sum of squared number is %d.",sum);
    return 0;
}