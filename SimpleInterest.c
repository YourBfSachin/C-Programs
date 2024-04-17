#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
    int p,t,r,i;
    printf("Enter p=");
    scanf("%d",& p);
    printf("Enter t=");
    scanf("%d",& t);
    printf("Enter r=");
    scanf("%d",& r);
    i=p*t*r/100;
    printf("Simple Interest=%d",i);
    getch;
}