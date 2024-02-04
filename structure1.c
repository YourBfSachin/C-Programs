#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    float s;
};
struct employee e[10];
int main()
{
int i;
printf("Enter the employee id,name and salary:");
for(i=0;i<10;i++)
{
    scanf("%d %s %f",&e[i].id,e[i].name,&e[i].s);
}
for(i=0;i<10;i++)
{
 printf("\n%d \t%s \t%f",e[i].id,e[i].name,e[i].s);
}
return 0;
}