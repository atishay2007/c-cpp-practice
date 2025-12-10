#include <stdio.h>

int main() {
    double trade, commission;
    printf("Enter value of trade: ");
    scanf("%lf", &trade);

    if (trade < 2500.0)
        commission = 30.0 + trade * 0.017;
    else if (trade < 6250.0)
        commission = 56.0 + trade * 0.0066;
    else if (trade < 20000.0)
        commission = 76.0 + trade * 0.0034;
    else if (trade < 50000.0)
        commission = 100.0 + trade * 0.0022;
    else if (trade < 500000.0)
        commission = 155.0 + trade * 0.0011;
    else
        commission = 255.0 + trade * 0.0009;

    if (commission < 39.0)
        commission = 39.0;

    printf("Commission: $%.2f\n", commission);
    return 0;
}
