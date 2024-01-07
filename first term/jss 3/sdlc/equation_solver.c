// equation_solver.c
#include "equation_solver.h"
#include <math.h>

double solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        // No real roots
        return NAN;
    } else {
        // Calculate and return the real roots
        return (-b + sqrt(discriminant)) / (2 * a);
    }
}

int solveSimultaneous(double a1, double b1, double c1, double a2, double b2, double c2, double *x, double *y) {
    double determinant = a1 * b2 - a2 * b1;
    if (determinant == 0) {
        // System is singular, no unique solution
        return 0;
    } else {
        // Calculate and return the solutions
        *x = (c1 * b2 - c2 * b1) / determinant;
        *y = (a1 * c2 - a2 * c1) / determinant;
        return 1;
    }
}

double solvePolynomial(double coefficients[], int degree, double x) {
    double result = 0;
    for (int i = 0; i <= degree; ++i) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}
