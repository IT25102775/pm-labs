#include <stdio.h>

int main() {
	float height1, height2, height3, average, total, known_heights, missing_heights, missing1, missing2;

	printf("Enter the heights of three known people: ");
	scanf("%f %f %f", &height1, &height2, &height3);

	printf("Enter the average height: ");
	scanf("%f", &average);

	total = average * 5;

	known_heights = height1 + height2 + height3;

	missing_heights = total - known_heights;

	missing1 = missing2 = missing_heights / 2;

	printf("\n The missing heights are approximately: %2f and %.2f\n",missing1, missing2);

	return 0;
}

