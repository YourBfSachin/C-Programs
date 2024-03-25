#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string:");
    gets(str);
    printf("\n");
    printf("The string you entered is:");
    puts(str);
    return 0;
}