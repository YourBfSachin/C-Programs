// Program to add two distance system (feet-inch system) entered by user using structure.
#include<stdio.h>
struct distance
{
    int feet;
    int inch;
};
int main()
{
    struct distance d1,d2,sum;
    printf("For d1:\n");
    printf("Enter feet & inch:");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("For d2:\n");
    printf("Enter feet & inch:");
    scanf("%d %d",&d2.feet,&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>=12)
    {
        sum.feet=sum.feet+sum.feet/12;
        sum.inch=sum.inch%12;
    }
    printf("Distance is %d in feet and %d in inch.",sum.feet,sum.inch);
    return 0;    
}