#include <stdio.h>

int main() {
  // Using for loop
  printf("Using for loop:\n");
  for (int i = 1; i <= 100; i++) {
    printf("%d ", i);
  }
  printf("\n");

  // Using while loop
  printf("Using while loop:\n");
  int i = 1;
  while (i <= 100) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  // Using do-while loop
  printf("Using do-while loop:\n");
  i = 1;
  do {
    printf("%d ", i);
    i++;
  } while (i <= 100);
  printf("\n");

  return 0;
}