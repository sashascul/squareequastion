#include "square_equation.h"

enum wordNumbers {
	ZERO = 0, 
	ONE = 1, 
	TWO = 2, 
	MANYROOTS
};

int testSquare (double a, double b, double c, double True_x1, double True_x2, int True_roots) {
	
	double x1 = NAN, x2 = NAN;
	int roots = 0;
	
	square_equation(a, b, c, &x1, &x2, &roots);
	
	if (roots != True_roots)
		return 1;
	if (x1 != True_x1) 
		return 1;
	if (x2 != True_x2)
		return 1;
	
	return 0;
	
}

int unitTest() {
	
	int error = 0;
	
	error = error + testSquare(1, -3, 2, 2, 1, 2);
	error = error + testSquare(0, -1, 6, 6, NAN, 1);
	error = error + testSquare(1, 1, 1, NAN, NAN, 0);
	error = error + testSquare(0, 0, 0, NAN, NAN, MANYROOTS);
	
	return error;
	
}
