#include <stdio.h>

int main() {
    float flow, height, power;
    float gravity = 9.81;
    float density = 1000;
    float efficiency = 0.9;

    printf("Enter flow rate (m^3/s): ");
    scanf("%f", &flow);

    printf("Enter dam height (m): ");
    scanf("%f", &height);

    power = efficiency * density * gravity * flow * height;

    
    printf("Generated power: %.2f watts\n", power);

    return 0;
}
