#include <stdio.h>
#include <string.h>

#define STRSIZ 50

struct student_t {
    char Name[STRSIZ];
    int Age;
    float GPA;
};

struct student_t profile() {

    struct student_t S1;
    printf("Enter Student's Name: ");
    fgets(S1.Name, sizeof(S1.Name), stdin);
    S1.Name[strlen(S1.Name) - 1] = '\0';

    printf("Enter Student's Age: ");
    scanf("%d", &S1.Age);

    printf("Enter Student's GPA: ");
    scanf("%f", &S1.GPA);

    return S1;
}

int main() {
    struct student_t S1 = profile();

    printf("Student Name: %s, Age: %d, GPA: %.1f\n",S1.Name, S1.Age, S1.GPA);

    return 0;
}
