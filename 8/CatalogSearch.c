#include <stdio.h>
#include <string.h>

 int main(){

    char Products[3][20] = {
        "Camera",
        "Camp Stove",
        "Candle"
    };
    char Search[20] = "";
    int found = 0;
    printf("Enter the name of product: ");
    fgets(Search, sizeof(Search), stdin);
    Search[strlen(Search) - 1] = '\0';

    printf("Products Found: ");

    for (int i = 0; i < 3; i++)
    {
        if (strstr(Products[i], Search))
        {
            printf("%s, ", Products[i]);
            found = 1;
        }
        
    }
    if (!found)
    {
        printf("No match Founded.");
    }

    printf("\n");
    return 0;
}
