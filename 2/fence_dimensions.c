#include <stdio.h>

int main() {
       float	perimeter, length,width;

	printf("Enter the perimeter of the fence: ");
	scanf("%f", &perimeter);

	length = (2.0 / 7.0) * perimeter;
	width = (3.0  / 4.0) * length;

	printf("Length of the fence: %.2f units\n", length);
	printf("width of the fence: %.2f units\n", width);

	return 0;
}
