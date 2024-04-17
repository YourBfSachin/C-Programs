#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter number=");
scanf("%d",&n);
if(n>0)
printf("%d is positive number.",n);
else if(n<0)
printf("%d is negative number.",n);
else
printf("%d is zero.",n);
getch();
}