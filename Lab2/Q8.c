#include <stdio.h>

int main() {

    float triangle_base, triangle_height, triangle_area;

    printf("Enter base and height: ");
    scanf("%f %f", &triangle_base, &triangle_height);

    triangle_area = 0.5 * triangle_base * triangle_height;

    printf("Area = %f\n", triangle_area);

    return 0;
}
