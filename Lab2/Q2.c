#include <stdio.h>
int main(){
    float input_cm, output_meter, output_km;
    printf("cm: ");
    scanf("%f",&input_cm);

    output_meter = input_cm / 100;
    output_km = input_cm / 100000;

    printf("m=%f km=%f", output_meter, output_km);
}
