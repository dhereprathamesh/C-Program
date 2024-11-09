#include <stdio.h>

int main() {
    int number1, number2, sum;
    printf("Enter the number to add: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;

    printf("Sum of Two numbers is: %d + %d = %d", number1, number2, sum );
    return 0;
} 