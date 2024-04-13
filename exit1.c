#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        if (i==3)
        {
            printf("\n");
            exit(0);
        }
        printf("%d\t",i);
    }
    printf("\nExecution of For loop completed.\n");
    return 0;
}