#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	char Name[100];
	char First_name[50] = "";
	char Last_name[50] = "";
	printf("Enter your name for Reservation: ");
	fgets(Name, sizeof(Name), stdin);
	Name[strlen(Name) - 1] = '\0';

	int count = sscanf(Name, "%s %s", First_name,Last_name);

	if (strlen(First_name) > 0){
		First_name[0] = toupper(First_name[0]);
		for(int i = 1; First_name[i]; i++){
			First_name[i] = tolower(First_name[i]);
		}
	}

	if (count == 2){
		Last_name[0] = toupper(Last_name[0]);
		for(int i = 1; Last_name[i]; i++){
			Last_name[i] = tolower(Last_name[i]);
		}
	}

	else{
		strcpy(Last_name, "N/A");
	}

	printf("Reservation For: %s %s\n", First_name,Last_name);

	return 0;
}




