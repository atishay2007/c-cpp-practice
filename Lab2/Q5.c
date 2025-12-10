#include <stdio.h>
#include <math.h>

int main() {

    double input_x, input_y, output_power;

    printf("Enter X and Y: ");
    scanf("%lf %lf", &input_x, &input_y);

    output_power = pow(input_x, input_y);

    printf("Power = %lf\n", output_power);

    return 0;
}
