#include<stdio.h>
int main()
{
    int i,j,w,x,y,z;
    printf("Enter the number of rows and column of first array:");
    scanf("%d %d",&w,&x);
    printf("Enter the number of rows and column of second array:");
    scanf("%d %d",&y,&z);
    int A1[w][x],A2[y][z];
    if (w==y && x==z)
    {
        for(i=0;i<w;i++)
        {
            for(j<0;j<x;j++)
            {
                printf("Enter the value of Array[%d][%d]:\t",i,j);
                scanf("%d",&A1[i][j]);
            }
            printf("\n");
        }
        int sum[i][j];
        for(i=0;i<w;i++)
        {
            for(j<0;j<x;j++)
            {
                sum[i][j]=A1[i][j]+A2[i][j];
            }
            printf("\n");
        }
        for(i=0;i<w;i++)
        {
            for(j<0;j<x;j++)
            {
                printf("%d\t",sum[i][j]);                
            }
            printf("\n");
        }       
    }
     else
        printf("Invalid");
        return 0;
    
    

}