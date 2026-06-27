#include <stdio.h>
#include <math.h>

void instruct() {
	printf("Enter three Binary numbers and Convert into Decimal numbers.\n");
}

void getInput(int *bin1, int *bin2, int *bin3) {
	printf("Enter bin1: ");
	scanf("%d", bin1);

	printf("Enter bin2: ");
	scanf("%d", bin2);

	printf("Enter bin3: ");
	scanf("%d", bin3);
}

void displayResult(int Decimal){
	printf("Decimal Number is: %d\n",Decimal);
}

int BinaryToDecimal(int bin1, int bin2, int bin3) {
	return bin3 * 4 + bin2 * 2 + bin1 ;
}

int main() {
	int bin1, bin2, bin3,Decimal;

	instruct();

	getInput(&bin1 , &bin2, &bin3);

	int result = BinaryToDecimal(bin1, bin2, bin3);
	displayResult(result);

	return 0;
	
}


