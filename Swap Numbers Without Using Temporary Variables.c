#include <stdio.h>
int main() {
   double first, second;
   printf("Enter the first number: ");
   scanf("%lf", &first);
    printf("Enter the second number: ");
   scanf("%lf", &second);

    first = first - second;
    second = first + second;
    first = second - first;

printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
    
    return 0;
}
