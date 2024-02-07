#include<stdio.h>
int main()
{
    float l,b,A,P;
    printf("Enter the length and breadth:");
    scanf("%f %f",&l,&b);
    A=l*b;
    P=2*(l+b);
    printf("The Perimeter and the Area of the rectangle with length=%f and breadth=%f is %f and %f respectively.",l,b,P,A);
    return 0;
}