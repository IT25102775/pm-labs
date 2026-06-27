#include <stdio.h>
#include <math.h>

float calculateArea(float radius) {
	return 3.14159 * radius * radius;
}
float calculateCircumference(float radius) {
	return 2 * 3.14159 * radius; 
}

int main() {
        float radius;

	printf("Enter the radius: ");
	scanf("%f", &radius);

	float area = calculateArea(radius);
	float circumference = calculateCircumference(radius);

	printf("The area of a Circle: %.2f units\n", area);
	printf("The circumference of a Circle: %.2f units\n", circumference);

	return 0;
}
