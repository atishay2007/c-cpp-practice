#include <stdio.h>

int main() {

    float mark_1, mark_2, mark_3, mark_4, mark_5;
    float total_marks, average_marks, percentage_marks;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &mark_1, &mark_2, &mark_3, &mark_4, &mark_5);

    total_marks = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
    average_marks = total_marks / 5;
    percentage_marks = (total_marks / 500) * 100;

    printf("Total = %f\n", total_marks);
    printf("Average = %f\n", average_marks);
    printf("Percentage = %f\n", percentage_marks);

    return 0;
}
