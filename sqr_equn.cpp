#include <stdio.h> 
#include <math.h>

double equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots) {
	
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
    else
        if (b != 0){
        	*pRoots = 1;
        	if (c != 0)
            	x1 = -c / b;
        	else
            	x1 = 0;
      
        *pX1 = x1;
        }
        
        else 
            if (c != 0)
                *pRoots = 0;
}


int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
	int roots = 0;
    printf("Hello! This programm can decide a square equation. Input parametrs a, b, c in a space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    equation(a, b, c, &x1, &x2, &roots);
    
	if (roots == 0)
		printf("NO ROOTS");
	if (roots == 1)
		printf("ROOT: 1\n%lf", x1);
	if (roots == 2)
		printf("ROOTS: 2\n%lf\n%lf", x1, x2);
	if (roots == 8) 
		printf("INFINITY ROOTS");
		
	

}
