///\file
///\brief This (test) file can test a square equation;

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
	printf("Your equation: x^2 - 3x + 2 = 0\nTrue results:\nROOTS:2\n1.000000\n2.000000\nResults of your equation:\nROOTS:%d\n%lf\n%lf\t", roots, x1, x2);
		if (roots == TWO && x1 == 1 && x2 == 2)
			printf("Good test\n\n");
		if (roots == TWO && x1 == 2 && x2 == 1)
			printf("Good test\n\n");
	x1 = NAN; x2 = NAN;
	
	error = error + testSquare(0, -1, 6, 6, NAN, 1);
		square_equation(0, -1, 6, &x1, &x2, &roots);
	printf("Your equation: -x + 6 = 0\nTrue results:\nROOTS:1\n6.000000\nResults of your equation:\nROOTS:%d\n%lf\n%lf\t", roots, x1, x2);
		if (roots == ONE && x1 == 6)
			printf("Good test\n\n");
	x1 = NAN; x2 = NAN;
	
	error = error + testSquare(1, 1, 1, NAN, NAN, 0);
		square_equation(1, 1, 1, &x1, &x2, &roots);
	printf("Your equation: x^2 + x + 1 = 0\nTrue results:\nROOTS:0\nResults of your equation:\nROOTS:%d\n%lf\n%lf\t", roots, x1, x2);
		if (roots == ZERO)
			printf("Good test\n\n");
	x1 = NAN; x2 = NAN;
	
	error = error + testSquare(0, 0, 0, NAN, NAN, MANYROOTS);
		square_equation(0, 0, 0, &x1, &x2, &roots);
	printf("Your equation: 0x^2 + 0x + 0 = 0\nTrue results:\nROOTS:-1,INFINITY\nResults of your equation:\nROOTS:%d\n%lf\n%lf\t", roots, x1, x2);
		if (roots == MANYROOTS)
			printf("Good test\n\n");
	
	printf("Error tests: %d\n", error);
	
	return error;
	
}
