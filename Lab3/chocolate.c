#include <stdio.h>

int main() {
    double N, C;
    int M;
    printf("Enter Amount, Price, Free Wrappers: ");
    scanf("%lf %lf %d", &N, &C, &M);

    int p = N / C;
    int f = p / M;
    int total = p + f;

    printf("Number of Chocolates = %d\n", total);
    return 0;
}
