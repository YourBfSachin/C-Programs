// Program to enter full name using formatted input function.
#include<stdio.h>
int main(){
    char str[20];
    printf("Enter your full name:");
    scanf("%[^\n]",str);
    printf("Your name is %s.",str);
    return 0;
}