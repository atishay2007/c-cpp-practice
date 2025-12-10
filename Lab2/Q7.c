#include <stdio.h>

int main() {

    int angle_one, angle_two, angle_three;

    printf("Enter two angles: ");
    scanf("%d %d", &angle_one, &angle_two);

    angle_three = 180 - (angle_one + angle_two);

    printf("Third Angle = %d\n", angle_three);

    return 0;
}