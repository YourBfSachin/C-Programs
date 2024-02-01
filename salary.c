#include<stdio.h>
int main()
{
    int salary[10],count=0;
    for(int i=0;i<10;i++)
    {
        printf("Employee no %d :",i+1);
        scanf("%d",&salary[i]);

        if (salary[i]>=10000 && salary[i]<=15000)
        {
            count++;
        }
        
    }
    printf("No of employees with salary between 10k-15k is %d",count);
    return 0;
}