#include <stdio.h> 
#include <math.h>

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

int sqr_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots) {
	
	double x1 = 0, x2 = 0, D = b * b - 4 * a * c, sqrtD = sqrt(D), a2 = 2 * a;
	
	if (a == 0 && b == 0 && c == 0){
        *pRoots = 8;
        return 0;
    } 
    if (a != 0){
        if (D > 0){
        	*pRoots = 2;
            x1 = (-b - sqrtD)/a2;
            x2 = (-b + sqrtD)/a2;
                if (x1 != 0)
                    *pX1 = x1;
            	else
                    *pX1 = 0;
            if (x2 != 0)
                *pX2 = x2;
            else
            	*pX2 = 0;
        }
        else
            if (D == 0){
            	*pRoots = 1;
                x1 = -b/a2;
                if (x1 != 0)
                    *pX1 = x1;
                else
                    *pX1 = 0;
            }
            else
                if (D < 0)
                    *pRoots = 0;
    }
    else {   	
    	double x11 = 0;
    	int roots1 = 0;
    	line_equation(a, b, c, &x11, &roots1);
    	*pRoots = roots1;
    	*pX1 = x11;
	}
}

void forSwitch(int roots, double x1, double x2) {
		switch(roots) {
		case 0:
			printf("NO ROOTS");
			break;
		case 1: 
			printf("ROOT: 1\n%lf", x1);
			break;
		case 2:
			printf("ROOTS: 2\n%lf\n%lf", x1, x2);
			break;
		case 8:
			printf("INFINITY ROOTS");
			break;
	}
}

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
	int roots = 0;
    printf("Hello! This program can decide a square equation. Input parametrs a, b, c in a space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    sqr_equation(a, b, c, &x1, &x2, &roots);
    forSwitch(roots, x1, x2);
	
}
