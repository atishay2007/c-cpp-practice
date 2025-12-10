#include <stdio.h>

int main() {
    int h, m;
    printf("Enter hours and minutes browsed: ");
    scanf("%d %d", &h, &m);

    if (h > 7 || (h == 7 && m > 0)) {
        printf("Browsing limit exceeded");
        return 0;
    }

    int amt = 0;

    if (h >= 5) {
        amt += 200;
        h -= 5;
    }

    amt += h * 50;
    amt += m;

    printf("Amount to be Paid = %d", amt);
    return 0;
}
