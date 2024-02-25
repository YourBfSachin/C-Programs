// Program to make array with no fixed size, store in integer in a array and print integers stored in array, add them .
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter the number of integers to be stored in array:");
    scanf("%d",&x);
    int num[x];
    for(i=0;i<x;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("The number %d is %d.\n",i+1,num[i]);
    }
    for(i=0;i<x;i++)
    {
        sum+=num[i];
    }
    printf("The sum is %d",sum);
    return 0;
}