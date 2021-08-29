///\file
///\brief This (main) file can test a square equation;

#include "square_equation.h"
#include "testSquareEquation.cpp"


int main()
{
    double a = NAN, b = NAN, c = NAN, x1 = 0, x2 = 0;
	int roots = 0;
		unitTest();
	determineNumber(&a, &b, &c);
	square_equation(a, b, c, &x1, &x2, &roots);
	forSwitch(roots, x1, x2);
}

int cON(double x) { // comparisonOfNumber

    assert (isfinite(x));

	const double EPS = 0.000001;
	if (fabs(x) < EPS)
		return 1;
	return 0;
}

void line_equation(double a, double b, double c, double *pX11, int *pRoots1) { 

    assert (isfinite(a));
    assert (isfinite(b));
    assert (isfinite(c));
    assert (pX11 != 0);
    assert (pRoots1 != 0);
   
		if (cON(b) == 0){
        	*pRoots1 = 1;
        	if (cON(c) == 0)
            	*pX11 = -c / b;
        	else
            	*pX11 = 0;
        }
        else 
            if (cON(c) == 0)
                *pRoots1 = 0;	
}

int square_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots) {	

    assert (isfinite(a));
    assert (isfinite(b));
    assert (isfinite(c));
    assert (pX1 != 0);
    assert (pX2 != 0);
    assert (pX1 != pX2);

	if (cON(a) == 1 && cON(b) == 1 && cON(c) == 1){
        *pRoots = MANYROOTS;
        return 0;
    } 
    
    if (cON(a) == 0){
    	double D = b * b - 4 * a * c, sqrtD = sqrt(D), twoA = 2 * a;
        if (D > 0){
        	*pRoots = TWO;
            *pX1 = (-b - sqrtD)/twoA;
            *pX2 = (-b + sqrtD)/twoA;
        }
        else
            if (cON(D) == 1){
            	*pRoots = ONE;
                *pX1 = -b/twoA;
            }
            else
                if (D < 0)
                    *pRoots = ZERO;
    }
    else {	
    	line_equation(a, b, c, pX1, pRoots);
	}
}

void forSwitch(int roots, double x1, double x2) {
	
    assert (isfinite(x1));
    assert (isfinite(x2));

		switch(roots) {
		case ZERO:
			printf("NO ROOTS\n");
			break;
		case ONE: 
			printf("ROOT: 1\n%lf\n", x1);
			break;
		case TWO:
			printf("ROOTS: 2\n%lf\n%lf\n", x1, x2);
			break;
		case MANYROOTS:
			printf("INFINITY ROOTS\n");
			break;
	}
}


void determineNumber(double *a, double *b, double *c) {
	
    printf("Hello! This program can decide a square equation. Input parametrs a, b, c in a space: ");
    scanf("%lf %lf %lf", a, b, c);
	
    if (isnan(*a) == 0 && isnan(*b) == 0 && isnan(*c) == 0) {
		return;
	}	
	else 
		printf("ERROR: Not a numbers\n");	
		exit(-1);
}
