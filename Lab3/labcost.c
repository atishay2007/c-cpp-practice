#include <stdio.h>

int main() {
    int nc, nt, nch, h;
    double cc, ct, cch, w;

    printf("Enter number of computers and cost per computer: ");
    scanf("%d %lf", &nc, &cc);

    printf("Enter number of tables and cost per table: ");
    scanf("%d %lf", &nt, &ct);

    printf("Enter number of chairs and cost per chair: ");
    scanf("%d %lf", &nch, &cch);

    printf("Enter labour hours and wage per hour: ");
    scanf("%d %lf", &h, &w);

    double comp = nc * cc;
    double furn = nt * ct + nch * cch;
    double lab = h * w;
    double total = comp + furn + lab;

    printf("Total Cost = %.2f\n", total);
    return 0;
}
