// Program to print numbers from 1 to input n numbers.
#include<stdio.h>
int main()
{
    int count,n,i,j;
    printf("Enter the number up to which prime number is to be printed: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        printf("%d \t",i);
    }
return 0;
}