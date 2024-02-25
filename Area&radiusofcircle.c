#include<stdio.h>
int main(){
    float r,A,C,pi=3.14;
    printf("Enter the radius:");
    scanf("%f",&r);
    A=pi*r*r;
    C=2*pi*r;
    printf("The area and circumference of given circle of radius %f is %f and %f respectively.",r,A,C);
    return 0;
}