#include <stdio.h>
int main(){
    float user_radius, user_diameter, user_circumference, user_area;
    printf("radius? ");
    scanf("%f",&user_radius);

    user_diameter = 2 * user_radius;
    user_circumference = 2 * 3.14 * user_radius;
    user_area = 3.14 * user_radius * user_radius;

    printf("diam=%f circ=%f area=%f", user_diameter, user_circumference, user_area);
}
