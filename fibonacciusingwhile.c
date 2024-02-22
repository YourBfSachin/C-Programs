#include<stdio.h>
int main(){
    int a=0,b=1,n,c;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d\t %d",a,b);
    c=a+b;
    while(c<=n)
    {
        printf("%d \t",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}