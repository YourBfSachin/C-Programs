// Program to make array with fixed size, store in integer in a array and print integers stored in array.
#include<stdio.h>
int main()
{
    int num[6],i,sum=0;
    for(i=0;i<6;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("The number %d is %d.\n",i+1,num[i]);
    }
    for(i=0;i<6;i++)
    {
        sum=sum+num[i];
    }
    printf("The sum is %d",sum);
    return 0;
}