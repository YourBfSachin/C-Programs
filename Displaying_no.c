#include<stdio.h>
int main()
{
    int i=0,a[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The number you entered are:");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}