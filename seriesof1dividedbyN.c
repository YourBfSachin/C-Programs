/* Write a C program to find the sum of following series 1+ 1/2 + 1/3 + 1/4 + 1/5 +...+1/N
 where N is any number entered by the user through keyboard. */
 #include<stdio.h>
 int main()
 {
    int n,i;
    float sum=0;
    printf("Enter the number of term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("The sum of series is %f.",sum);
    return 0;
 }