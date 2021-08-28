#include <stdio.h>
#include <math.h>
#include <assert.h>

int cON(double x);

void line_equation(double a, double b, double c, double *pX11, int *pRoots1);

int square_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots);

void forSwitch(int roots, double x1, double x2);

void compareNumber(double a, double b, double c, const double EPS);

void determineNumber(double *a, double *b, double *c);

int testSquare(double a, double b, double c, double True_x1, double True_x2, int True_roots);

int unitTest();
