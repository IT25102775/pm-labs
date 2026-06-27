#include <stdio.h>

int sumOfDigits(int number) {
   
    if (number == 0) {
        return 0;
    }

    if (number < 0) {
        number = -number;
    }
   
    return (number % 10) + sumOfDigits(number / 10);
}

int main() {
    int number;
    
    printf("Enter an Number: ");
    scanf("%d", &number);
    
    int result = sumOfDigits(number);
    
    printf("Sum of digits: %d\n", result);
    
    return 0;
}
