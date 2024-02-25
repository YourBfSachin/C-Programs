//Write a program that will convert temperature in centigrade into Fahrenheit.
#include<stdio.h>
int main(){
float C,F;
printf("Enter the temperature in celsius:\n");
scanf("%f",&C);
F = (C*9/5) + 32;
printf("The temperature in Fahrenheit is %f.",F);
return 0;
}