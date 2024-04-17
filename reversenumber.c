#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,x,rem,rev=0;
printf("Enter no=");
scanf("%d",&n);
x=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
printf("\nReverse of %d is %d",x,rev);
getchar();
}
