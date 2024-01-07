// main.c
#include <stdio.h>
#include "equation_solver.h"

int main() {
    double a, b, c, x, y;
    double quadraticResult;

    // Quadratic equation solver
    printf("Enter coefficients for quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    quadraticResult = solveQuadratic(a, b, c);
    if (!isnan(quadraticResult)) {
        printf("Quadratic solution: %lf\n", quadraticResult);
    } else {
        printf("No real roots for quadratic equation.\n");
    }

    // Simultaneous equation solver
    printf("Enter coefficients for simultaneous equations (a1, b1, c1, a2, b2, c2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &x, &y, &c);
    if (solveSimultaneous(a, b, c, x, y, c, &x, &y)) {
        printf("Simultaneous equation solutions: x = %lf, y = %lf\n", x, y);
    } else {
        printf("No unique solution for simultaneous equations.\n");
    }

    // Polynomial equation solver
    int degree;
    printf("Enter the degree of the polynomial equation: ");
    scanf("%d", &degree);
    double coefficients[degree + 1];
    printf("Enter coefficients for the polynomial equation: ");
    for (int i = 0; i <= degree; ++i) {
        scanf("%lf", &coefficients[i]);
    }
    printf("Enter the value of x for the polynomial equation: ");
    scanf("%lf", &x);
    printf("Polynomial equation result: %lf\n", solvePolynomial(coefficients, degree, x));

    return 0;
}
