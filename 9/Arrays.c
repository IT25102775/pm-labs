#include <stdio.h>
#include <string.h>

int countOccurrences(char (*words)[50], int n, char *target);

int main() {
    int n = 5;
    char words[100][50];
    char searchWord[50];

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", *(words + i));  
    }

    printf("Enter word to search: ");
    scanf("%s", searchWord);

    int result = countOccurrences(words, n, searchWord);

    printf("The word '%s' appears %d times.\n", searchWord, result);

    return 0;
}

int countOccurrences(char (*words)[50], int n, char *target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(*(words + i), target) == 0) { 
            count++;
        }
    }
    return count;
}
