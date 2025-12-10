#include <stdio.h>
#include <math.h>

int main() {

    float input_number, output_root;

    printf("Enter number: ");
    scanf("%f", &input_number);

    output_root = sqrt(input_number);

    printf("Square Root = %f\n", output_root);

    return 0;
}

