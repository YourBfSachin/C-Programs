#include<stdio.h>
int main()
{
    char name[10][],count=0;
    for( int i=0; i<3 ; i++)
    {
        printf("Enter name %d :",i+1);
        scanf("%d",name[i]);
    }
    return 0;
}