#include<stdio.h>
int main()
{
 int n,i,j,count,prime_nums=0;
 printf("Enter the value of N:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 count=0;
 for(j=1;j<=i;j++)
 {
 if(i%j==0)
 {
 count++;
 }
 }
 if(count==2)
 {
 printf("%d\t",i);
 prime_nums++;
 }
 
 }
 printf("\n");
 printf("The total number of prime numbers in the given range is %d.",prime_nums);
 return 0;
}