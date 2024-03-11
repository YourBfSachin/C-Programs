#include <stdio.h>

int main() {
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   // Using for loop
   printf("Even numbers using for loop:\n");
   for (int i = 2; i <= n; i += 2) {
       printf("%d ", i);
   }
   printf("\n");

   // Using while loop
   printf("Even numbers using while loop:\n");
   int i = 2;
   while (i <= n) {
       printf("%d ", i);
       i += 2;
   }
   printf("\n");

   // Using do-while loop
   printf("Even numbers using do-while loop:\n");
   i = 2;
   do {
       printf("%d ", i);
       i += 2;
   } while (i <= n);
   printf("\n");

   return 0;
}
