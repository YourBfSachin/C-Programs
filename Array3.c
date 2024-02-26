// Program to input 'n' numbers and find the largest and smallest number.
#include<stdio.h>
int main()
{
    int n,largest,smallest,i;
    printf("Enter the numbers of intergers to be entered:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number_%d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("You entered the numbers:%d.\n",num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
        }
        if(num[i]<smallest)
        {
            smallest=num[i];
        }     
    }
    printf("The largest number is %d and the smallest is %d.",largest,smallest);
}