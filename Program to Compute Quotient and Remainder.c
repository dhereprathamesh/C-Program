#include <stdio.h>

int main() {
    int divident, divisor, quotient, remainder;
    
    printf("Enter Divident: ");
    scanf("%d", &divident);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

quotient = divident / divisor;

remainder = divident % divisor;

printf("Quotient is %d\n", quotient);
printf("Remainder is %d\n", remainder);

    return 0;
} 