#include <stdio.h>

void swap(int *a, int *b) {
	int s = *a;
	int r = *b;

	*a = r;
	*b = s;

	}
int main () {
	int a = 5;
	int b = 10;

	printf("Before swap: a= %d, b= %d\n",a,b);

	swap(&a, &b);

	printf("After swap: a= %d, b= %d\n",a,b);

	return 0;
}

	
