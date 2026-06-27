#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int x = b;
        b = a % b;
        a = x;
    }
    return a;
}

 void simplify_fraction(int *numerator, int *denominator) {

    int divisor = gcd(*numerator, *denominator);
    *numerator = *numerator / divisor;
    *denominator = *denominator / divisor;
}

 int main() {

    int numerator, denominator;

    printf("Enter Numerator: ");
    scanf("%d", &numerator);

    printf("Enter Denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0) {

        printf("Denominator cannot be zero\n");

        return 0;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}
