#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3) {
    if (num2 > num3) {
      printf("The second largest number is: %d\n", num2);
    } else {
      printf("The second largest number is: %d\n", num3);
    }
  } else if (num2 > num1 && num2 > num3) {
    if (num1 > num3) {
      printf("The second largest number is: %d\n", num1);
    } else {
      printf("The second largest number is: %d\n", num3);
    }
  } else {
    if (num1 > num2) {
      printf("The second largest number is: %d\n", num1);
    } else {
      printf("The second largest number is: %d\n", num2);
    }
  }
    int units;
  float bill;

  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  if (units <= 20) {
    bill = 80;
  } else if (units <= 120) {
    bill = 80 + (units - 20) * 7.30;
  } else {
    bill = 80 + 100 * 7.30 + (units - 120) * 9.00;
  }

  printf("Monthly bill: Rs. %.2f\n", bill);
  return 0;
}