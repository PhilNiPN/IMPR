#include <stdio.h>

const double PI = 3.14;

double circumference(double radius) {
    return 2 * radius * PI;
}

double areal(double radius) {
    return radius * radius * PI;
}


int main(int argc, char **argv) {
    double radius;
    printf("hvad er radius: ");
    scanf("%lf", &radius);

    double omkreds = circumference(radius);
    double arealet = areal(radius);

    printf("Omkreadsen er: %lf\n", omkreds);
    printf("Arealet er: %lf\n", arealet);

    return 0;
}