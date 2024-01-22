//Program to check whether the input number is "even" or "odd".
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    getch();
}
