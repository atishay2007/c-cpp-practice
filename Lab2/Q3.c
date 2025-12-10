#include <stdio.h>
int main(){
    float temp_celsius, temp_fahrenheit;
    scanf("%f",&temp_celsius);

    temp_fahrenheit = (temp_celsius * 9/5) + 32;

    printf("F=%f", temp_fahrenheit);
}
