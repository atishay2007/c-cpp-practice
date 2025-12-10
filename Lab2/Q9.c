#include <stdio.h>
#include <math.h>

int main() {

    float side_length, equi_area;

    printf("Enter side length: ");
    scanf("%f", &side_length);

    equi_area = (sqrt(3) / 4) * side_length * side_length;

    printf("Area = %f\n", equi_area);

    return 0;
}
