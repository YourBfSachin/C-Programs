#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x, factor=0;
printf("Enter x =");
scanf("%d",&x);   
for(int i=1;i<=x;i++)
{
if(x%i==0)
{
factor++;
} 
}  
if(factor == 2) 
{
printf("Prime");
} 
else
{
printf("Composite");
}
getchar();
}         
