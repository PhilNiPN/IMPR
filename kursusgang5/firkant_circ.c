#include <stdio.h>
#include <math.h>

double firkant_circum(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
double langde_side (double x1, double y1, double x2, double y2);

int main(int argc, char **argv) {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    printf("indtast punkter i formen: (x1,y1), (x2,y2), (x3,y3), (x4, y4)\n");
    scanf("(%lf,%lf), (%lf,%lf), (%lf,%lf), (%lf,%lf)", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    double res = firkant_circum(x1, y1, x2, y2, x3, y3, x4, y4);

    printf("omkreds: %lf", res);
}

double firkant_circum(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    return langde_side(x1, y1, x2, y2) + langde_side(x2, y2, x3, y3) + langde_side(x3, y3, x4, y4) + langde_side(x4, y4, x1, y1);
}

double langde_side(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}