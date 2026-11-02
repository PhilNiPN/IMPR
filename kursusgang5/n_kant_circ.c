#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double polygon_circumference(const double x[], const double y[], int n);
double langde_side(double x1, double y1, double x2, double y2);

int main(void) {
    int n;
    printf("Indtast antal kanter: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Ugyldigt antal kanter.\n");
        return 1;
    }
    if (n < 3) {
        fprintf(stderr, "Antallet af kanter skal vaere mindst 3.\n");
        return 1;
    }

    double *x = malloc((size_t)n * sizeof *x);
    double *y = malloc((size_t)n * sizeof *y);
    if (x == NULL || y == NULL) {
        fprintf(stderr, "Kunne ikke allokere hukommelse til punkterne.\n");
        free(x);
        free(y);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Indtast punkt %d som (x,y): ", i + 1);
        if (scanf(" ( %lf , %lf )", &x[i], &y[i]) != 2) {
            fprintf(stderr, "Ugyldigt punkt.\n");
            free(x);
            free(y);
            return 1;
        }
    }

    double res = polygon_circumference(x, y, n);
    printf("Omkreds: %lf\n", res);

    free(x);
    free(y);
    return 0;
}

double polygon_circumference(const double x[], const double y[], int n) {
    double circumference = 0.0;
    for (int i = 0; i < n; i++) {
        int next = (i + 1) % n;
        circumference += langde_side(x[i], y[i], x[next], y[next]);
    }
    return circumference;
}

double langde_side(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}