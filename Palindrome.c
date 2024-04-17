#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,r,c;
printf("Enter a number=");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==c)
printf("The number is pallindrome");
else
printf("The number is not a pallindrome");
getch();
}