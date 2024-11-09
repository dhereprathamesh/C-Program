#include <stdio.h>

int main() {
    double number1, number2, product;
    printf("Enter the number to Multidy: ");
    scanf("%lf %lf", &number1, &number2);

    product = number1 * number2;

    printf("Multiplication of Two Point numbers is: %.2lf", product);
    return 0;
} 