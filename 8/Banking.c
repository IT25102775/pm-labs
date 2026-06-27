#include <stdio.h>
#include <string.h>

int main() {
    char input[100] = "";  
    char Name[60] = "";
    char AccountNumber[40] = "";

    printf("Enter your Name and Account Number: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    
if (sscanf(input, " %59[^,] , %39s", Name, AccountNumber) == 2)
{
    printf("Name: %s, Account Number: %s\n", Name, AccountNumber);
}
else {
    printf("INVALID ACCOUNT!\n");
}


    return 0;
}
