#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	char Fruits[50] = "";
	char Fruit1[10] = "";
	char Fruit2[10] = "";
	char Fruit3[10] = "";
	printf("Enter the Names of Friuts: ");
	fgets(Fruits, sizeof(Fruits), stdin);
	Fruits[strlen(Fruits) - 1] = '\0';
	int count = sscanf(Fruits," %s %s %s", Fruit1, Fruit2, Fruit3);
	

	char Temp[10] = "";
	if (strcmp(Fruit1, Fruit2) > 0){
		strcpy(Temp, Fruit1);
		strcpy(Fruit1, Fruit2);
		strcpy(Fruit2, Temp);
	}
	if (strcmp(Fruit1, Fruit3) > 0){
		strcpy(Temp, Fruit1);
		strcpy(Fruit1, Fruit3);
		strcpy(Fruit3, Temp);
	}
	if(strcmp(Fruit2, Fruit3) > 0){
		strcpy(Temp, Fruit2);
		strcpy(Fruit2, Fruit3);
		strcpy(Fruit3, Temp);
	}

	printf("Sorted Fruits: %s , %s , %s\n",Fruit1, Fruit2, Fruit3);
		
	return 0;
}
