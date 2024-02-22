// Calculate the sum and average of n numbers using do while loop.
#include<stdio.h>
int main(){
    int sum=0,average=0,n,x,count=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do{
        printf("Enter the number%d:",count);
        scanf("%d",&x);
        sum=sum+x;
        count++;
    }while(count<=n);
    average=sum/n;
    printf("The sum is %d and average is %d.",sum,average);
    return 0;
}