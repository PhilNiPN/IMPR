#include "sum.h"

int sum_iter(int n) {
    double sum;
    for (int i = 0; i <= n; i++){
        sum += i;
    }

    return sum;
}

int sum_formula(int n) {

    double formula = (n+1) * n / 2;
    return formula;
}