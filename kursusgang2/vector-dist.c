#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    
    printf("indtast punkt 1 i format (x, y):");
    scanf("(%lf, %lf)", &x1, &y1);
    printf("indtast punkt 2 i format (x, y):");
    scanf(" (%lf, %lf)", &x2, &y2);
    printf("indtast punkt 3 i format (x, y):");
    scanf(" (%lf, %lf)", &x3, &y3);

    double deltaX1 = x2 - x1;
    double deltaY1 = y2 - y1;
    double deltaX2 = x3 - x2;
    double deltaY2 = y3 - y2;

    double distance = sqrt(deltaX1 * deltaX1 + deltaY1 * deltaY1) + sqrt(deltaX2 * deltaX2 + deltaY2 * deltaY2);

    printf("Distancen er: %lf \n", distance);

    return 0;
}