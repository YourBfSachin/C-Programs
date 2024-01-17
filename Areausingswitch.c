#include <stdio.h>

int main()
{
  int choice;
    float l, b, h, r;
    printf("1.Area of square\n 2.Area of triangle\n 3.Area of circle\n");
    printf("Enter Your choice = ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Enter Length=");
        scanf("%f", &l);
        printf("l*l=%f", l * l);
        break;
    case 2:
        printf("Enter Base=");
        scanf("%f", &b);
        printf("Enter Height=");
        scanf("%f", &h);
        printf("0.5*b*h=%f",0.5*b*h);
        break;
    case 3:   printf("Enter Radius=");
    scanf("%f", &r);
   printf("22*r*r/7=%f",22*r*r/7);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
