#include <stdio.h>
#include <math.h>

int main() {

    float principal_amount, rate_interest, time_years, compound_interest;

    printf("Enter P, R, T: ");
    scanf("%f %f %f", &principal_amount, &rate_interest, &time_years);

    compound_interest = principal_amount * pow((1 + rate_interest / 100), time_years) - principal_amount;

    printf("Compound Interest = %f\n", compound_interest);

    return 0;
}

