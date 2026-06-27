#include <stdio.h>

typedef struct 
{
    int Width;
    int Height;
} rectangle_t;

void Updated_Rectangle(rectangle_t *Rectangle){
    printf("Enter the Width of Rectangle: ");
    scanf("%d", &Rectangle->Width);

    printf("Enter the Height of Rectangle: ");
    scanf("%d", &Rectangle->Height);
}

int main() {
    rectangle_t Rectangle;

    Updated_Rectangle(&Rectangle);
    printf("Updated Rectangle - Width: %dcm , Height: %dcm \n", Rectangle.Width, Rectangle.Height);

    return 0;
}
