/* Write a program in C to find the second largest number among three numbers.
The monthly electricity bill is to be computed as follows:-
 a.Minimum Rs.80 for up to 20 units.
 b.Rs.7.3 per unit for next 100 units.
 c.Rs.9 per unit for any units beyond 120 units.
 */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c)
        printf("The second greatest is %d.\n",b);
        else
        printf("The second greatest is %d.\n",c);
    }
    else if(b>a&&b>c)
    {
        if(a>c)
        printf("The second greatest is %d.\n",a);
        else
        printf("The second greatest is %d.\n",c);
    }
    else
    {
        if(a>b)
        printf("The second greatest is %d.\n",a);
        else
        printf("The second greatest is %d.\n",b);
    }
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 20)
    {
        bill = 80;
    }
    else if (units <= 120)
    {
        bill = 80 + (units - 20) * 7.30;
    }
    else
    {
        bill = 80 + 100 * 7.30 + (units - 120) * 9.00;
    }

    printf("Monthly bill: Rs.%.2f\n", bill);
    return 0;
}