#include <stdio.h>

int main() {

    float temp_fahrenheit, temp_celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp_fahrenheit);

    temp_celsius = (temp_fahrenheit - 32) * 5 / 9;

    printf("Celsius = %f\n", temp_celsius);

    return 0;
}
