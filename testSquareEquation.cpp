#include "square_equation.h"

enum wordNumbers {
	ZERO = 0, 
	ONE = 1, 
	TWO = 2, 
	MANYROOTS = -1
};

int testSquare (double a, double b, double c, double True_x1, double True_x2, int True_roots) {
	
	double x1 = NAN, x2 = NAN;
	int roots = 0;
	
	square_equation(a, b, c, &x1, &x2, &roots);
	
	if (roots != True_roots)
		return 0;
	if (x1 != True_x1) 
		return 0;
	if (x2 != True_x2)
		return 0;
	
	return 1;
	
}

int unitTest() {
	
	int error = 0, roots = 0;
	double x1 = NAN, x2 = NAN;
	
	error = error + testSquare(1, -3, 2, 2, 1, 2);
		square_equation(1, -3, 2, &x1, &x2, &roots);
	printf("x^2 - 3x + 2 = 0\nResults of your equation:\nROOTS:%d\n%lf\n%lf\n", roots, x1, x2);
	x1 = NAN; x2 = NAN;
	error = error + testSquare(0, -1, 6, 6, NAN, 1);
		square_equation(0, -1, 6, &x1, &x2, &roots);
	printf("3x + 2 = 0\nResults of your equation:\nROOTS:%d\n%lf\n%lf\n", roots, x1, x2);
	x1 = NAN; x2 = NAN;
	error = error + testSquare(1, 1, 1, NAN, NAN, 0);
		square_equation(1, 1, 1, &x1, &x2, &roots);
	printf("x^2 - 3x + 1 = 0\nResults of your equation:\nROOTS:%d\n%lf\n%lf\n", roots, x1, x2);
	x1 = NAN; x2 = NAN;
	error = error + testSquare(0, 0, 0, NAN, NAN, MANYROOTS);
		square_equation(0, 0, 0, &x1, &x2, &roots);
	printf("0x^2 + 0x + 0 = 0\nResults of your equation:\nROOTS:%d\n%lf\n%lf\n", roots, x1, x2);
	
	printf("Error tests: %d\n", error);
	
	return error;
	
}
