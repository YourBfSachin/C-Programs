// 48. Write a C program to generate the first n terms of the Fibonacci sequence
#include <stdio.h>

void generateFibonacci(int n) {
  int firstTerm = 0, secondTerm = 1, nextTerm;

  printf("Fibonacci Series: ");

  for (int i = 1; i <= n; i++) {
    printf("%d, ", firstTerm);
    nextTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = nextTerm;
  }
}

int main() {
  int n;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  generateFibonacci(n);

  return 0;
}