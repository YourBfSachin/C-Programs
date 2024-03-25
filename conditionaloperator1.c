#include<stdio.h>
int main()
{
    int n1,n2,larger;
    printf("Enter the numbers:");
    scanf("%d\t%d",&n1,&n2);
    larger=(n1>n2)?n1:n2;
    printf("The largest number among the entered two numbers is %d.",larger);
    return 0;
}