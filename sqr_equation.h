#include <stdio.h>
#include <math.h>
#include <assert.h>

int comparisonOfNumber(double *x, double *y);

void line_equation(double a, double b, double c, double *pX11, int *pRoots1);

int square_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots);

void forSwitch(int roots, double x1, double x2);

void compareNumber(double a, double b, double c, const double EPS);

void determineNumber(double a, double b, double c, double x1, double x2, int roots);

int CV (double a, double b, double c, double *pX1, double *pX2);


enum wordNumbers {
	ZERO = 0, 
	ONE = 1, 
	TWO = 2, 
	MANYROOTS
};
