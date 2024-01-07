// equation_solver.h
#ifndef EQUATION_SOLVER_H
#define EQUATION_SOLVER_H

// Function declarations
double solveQuadratic(double a, double b, double c);
int solveSimultaneous(double a1, double b1, double c1, double a2, double b2, double c2, double *x, double *y);
double solvePolynomial(double coefficients[], int degree, double x);

#endif
