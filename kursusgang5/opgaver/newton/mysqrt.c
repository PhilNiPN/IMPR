#include "mysqrt.h"
#include <math.h>
#include <stdlib.h>

/* Placer din implementation af my_sqrt i denne fil */

double my_sqrt(double n){

    if(n == 0) {
        return 0;
    } else if (n < 0) { 
        return -1;

    }

    double error_val = 0.001;
    double x_current = n / 2.0;
    double x_next = 0.5 * (x_current + (n / x_current));

    while (fabs(x_next - x_current) >= error_val) {
        x_current = x_next;
        x_next = 0.5 * (x_current + (n/x_current));
    } 
    
    return x_next;
}