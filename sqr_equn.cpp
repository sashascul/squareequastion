#include "sqr_equation.h"

int main()
{
    double a = NAN, b = NAN, c = NAN, x1 = 0, x2 = 0;
	int roots = 0;
	determineNumber(a, b, c, x1, x2, roots);

}

int cON(double x) { // comparisonOfNumber
	const double EPS = 0.000001;
	if (fabs(x) < EPS)
		return 1;
	return 0;
}

void line_equation(double a, double b, double c, double *pX11, int *pRoots1) {    
		if (b != 0){
        	*pRoots1 = 1;
        	if (c != 0)
            	*pX11 = -c / b;
        	else
            	*pX11 = 0;
        }
        else 
            if (c != 0)
                *pRoots1 = 0;	
}

int square_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots) {	
	if (cON(a) == 1 && cON(b) == 1 && cON(c) == 1){
        *pRoots = 8;
        return 0;
    } 
    if (a != 0){
    	double D = b * b - 4 * a * c, sqrtD = sqrt(D), twoA = 2 * a;
        if (D > 0){
        	*pRoots = 2;
            *pX1 = (-b - sqrtD)/twoA;
            *pX2 = (-b + sqrtD)/twoA;
        }
        else
            if (cON(D) == 1){
            	*pRoots = 1;
                *pX1 = -b/twoA;
            }
            else
                if (D < 0)
                    *pRoots = 0;
    }
    else {	
    	line_equation(a, b, c, pX1, pRoots);
	}
}

void forSwitch(int roots, double x1, double x2) {
		switch(roots) {
		case ZERO:
			printf("NO ROOTS");
			break;
		case ONE: 
			printf("ROOT: 1\n%lf", x1);
			break;
		case TWO:
			printf("ROOTS: 2\n%lf\n%lf", x1, x2);
			break;
		case MANYROOTS:
			printf("INFINITY ROOTS");
			break;
	}
}


void determineNumber(double a, double b, double c, double x1, double x2, int roots) {
    printf("Hello! This program can decide a square equation. Input parametrs a, b, c in a space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
	
    if (isnan(a) == 0 && isnan(b) == 0 && isnan(c) == 0) {
    	square_equation(a, b, c, &x1, &x2, &roots);
    	forSwitch(roots, x1, x2);
	}	
	else 
		printf("ERROR: Not a numbers");		
}
