#include <stdio.h>

int main() {
    
    double speed_kmph, speed_mps, distance, time, acceleration;

    printf("Enter the takeoff speed in km/h: ");
    scanf("%lf", &speed_kmph);

    printf("Enter the acceleration distance in meters: ");
    scanf("%lf", &distance);


    speed_mps = speed_kmph * 1000 / 3600;

    time = (2 * distance) / speed_mps;

    acceleration = speed_mps / time;

    printf("Time to reach takeoff speed: %.2f seconds\n", time);
    printf("Acceleration needed: %.2f m/s^2\n", acceleration);

    return 0;
}
