#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int id;
    int score;
};

int main() {
    int Count;
    printf("Enter number of students: ");
    scanf("%d", &Count);

    struct Student students[Count];

    for (int i = 0; i < Count; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Score: ");
        scanf("%d", &students[i].score);
    }

    int HighestScore = 0;
    for (int i = 1; i < Count; i++) {
        if (students[i].score > students[HighestScore].score) {
            HighestScore = i;
        }
    }

    printf("\nBest Student: %s (%d), Score: %d\n",
           students[HighestScore].name,
           students[HighestScore].id,
           students[HighestScore].score);

    return 0;
}
