#include <stdio.h>

int main() {

    float principal_amount, time_years, rate_interest, simple_interest;

    printf("Enter P, T, R: ");
    scanf("%f %f %f", &principal_amount, &time_years, &rate_interest);

    simple_interest = (principal_amount * time_years * rate_interest) / 100;

    printf("Simple Interest = %f\n", simple_interest);

    return 0;
}
