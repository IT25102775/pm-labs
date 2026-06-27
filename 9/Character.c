#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100] = "";
    int digits = 0;
    int alphabets = 0;
    int special = 0;

    printf("Enter the Input: ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
       char ch = input[i];

       if (isdigit(ch))
       {
        digits++;
       }
       else if (isalpha(ch))
       {
        alphabets++;
       }
       else if (ispunct(ch))
       {
        special++;
       }
    }
    printf("Results: \n");
    printf("Alphabets: %d, Digits: %d, Special Characters: %d\n", alphabets, digits, special);

    return 0;
    
}
