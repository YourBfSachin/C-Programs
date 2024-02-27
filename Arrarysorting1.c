#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("How many number is going to be entered:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number_%d:",i+1);
        scanf("%d",&num[i]);        
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("The 1st number is %d.\n",num[i]);
        }       
        else if (i==1)
        {
            printf("The 2nd number is %d.\n",num[i]);
        }
        else if (i==2)
        {
            printf("The 3rd number is %d.\n",num[i]);
        }
        else 
        {
            printf("The %dth number is %d.\n",i+1,num[i]);
        }
    }
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }            
        }
    }
    printf("The sorted number in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",num[i]);
    }
    printf("\n");
    printf("The sorted number in descending order is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d \t",num[i]);
    }
    return 0;
}