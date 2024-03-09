#include<stdio.h>
int main()
{
    int w,x,y,z,i,j,sum,k;
    printf("Enter the rows and columns of 1st and 2nd array:");
    scanf("%d %d %d %d",&w,&x,&y,&z);
    int A1[w][x],A2[y][z],c[w][z];

    for(i=0;i<w;i++)
    {
        for(j=0;j<x;j++)
        {
             printf("Enter the value of array 1 in index [%d][%d]:",i,j);
             scanf("%d",&A1[i][j]); 
        }
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
             printf("Enter the value of array 1 in index [%d][%d]:",i,j);
             scanf("%d",&A2[i][j]); 
        }
    }
    
    if(x==y)
    {
        for(i=0;i<w;i++)
        {
            for(j=0;j<z;j++)
            sum=0;
            {
                for(k=0;k<x;k++)
                {
                    sum=sum+A1[i][k]+A2[k][j];
                }
                c[i][j]=sum;
            }
        }
    }
   for(i=0;i<w;i++)
    {
        for(j=0;j<z;j++)
        {
             printf("%d \t",c[i][j]); 
        }
        printf("\n");
    }
    return 0;
}