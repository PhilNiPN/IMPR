#include <stdio.h>

double multi_apply(double (*f)(double), int antal, double start);
double half(double x);
double multi_apply_2_func(double (*f)(double), double (*g)(double), int antal, double start);
double sign(double x);

int main (void) {
    double multi_half = multi_apply(half, 4, 16.0);
    double multi_sign_half = multi_apply_2_func(sign, half, 3, 16.0);

    printf("%lf\n", multi_half);
    printf("%lf\n", multi_sign_half);

    return 0;
}

/*
double multi_apply(double (*f)(double), int antal, double start) {
    double result = start;

    for (int i = 0; i < antal; i++) {
        result = f(result);
    }
    return result;
}
*/

double multi_apply(double (*f)(double), int antal, double start) {

    if (antal == 0) {
        return start;
    }

    return f(multi_apply(f, antal - 1, start));
}

double half(double x) {
    return x / 2;
}

double multi_apply_2_func(double (*f)(double), double (*g)(double), int antal, double start) {
    double result = start;

    for (int i = 0; i < antal; i++) {
        result = f(g(result)); // inner func first, then outer.
    }
    return result;
}

double sign(double x) {
    return x * -1;
}


/*
notes: 
Why the pointer type looks like this: double (*f)(double) ?
 - f is the parameter name and *f is the pointer (which means is holds an address).
 - The parentheses around *f decide what * applies to. 
   - Without them, double *f(double) is a function that returns a double *
   - The compiler uses this type to check the call: one double goes in, one double comes out.
*/