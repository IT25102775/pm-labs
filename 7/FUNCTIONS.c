#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area) {


	*circumference = 2 * 3.14 * radius;
	*area = 3.14 * radius * radius;
}

int main () {
	float radius = 5;
	float circumference;
	float area;

	calculate_circle(radius, &circumference, &area);

	printf("Radius: %.f\n",radius);
	printf("Circumference: %.2f\n",circumference);
	printf("area: %.2f\n",area);

	return 0;
}
