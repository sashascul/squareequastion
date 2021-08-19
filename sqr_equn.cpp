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

void equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots) {
	
	double x1 = 0, x2 = 0; 
	
	if (a == 0 && b == 0 && c == 0){
        *pRoots = 8;
    } 
    if (a != 0){
        if (b * b - 4 * a * c > 0){
        	*pRoots = 2;
            x1 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
            x2 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
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
            if (b * b - 4 * a * c == 0){
            	*pRoots = 1;
                x1 = -b/(2 * a);
                if (x1 != 0)
                    *pX1 = x1;
                else
                    *pX1 = 0;
            }
            else
                if (b * b - 4 * a * c < 0)
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

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
	int roots = 0;
    printf("Hello! This programm can decide a square equation. Input parametrs a, b, c in a space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    equation(a, b, c, &x1, &x2, &roots);

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
