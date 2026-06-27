#include <stdio.h>
#include <string.h>

typedef struct {
    char title[50];
    float ratings[5];
} movie_t;

float calculateAverage(movie_t movie) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += movie.ratings[i];
    }
    return sum / 5.0;
}

int main() {
    movie_t movie;

    // Get movie title
    printf("Enter movie title: ");
    fgets(movie.title, sizeof(movie.title), stdin);
    movie.title[strlen(movie.title) - 1] = '\0';

    printf("Enter 5 ratings out of 5 Stars:\n");
    for (int i = 0; i < 5; i++) {
        printf("Rating %d: ", i + 1);
        scanf("%f", &movie.ratings[i]);
    }

    float average = calculateAverage(movie);
    printf("\nAverage Rating for %s: %.1f\n", movie.title, average);

    return 0;
}
