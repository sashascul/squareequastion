#include <bits/stdc++.h> 

double equation(double a, double b, double c) {
	
	double a,b,c; //a*x*x + b*x + c = 0
    scanf("%lf %lf %lf", &a, &b, &c);
	double x1, x2;
	
	if(a == 0 && b == 0 && c == 0){
        printf("INFINITY ROOTS");
        return 0; // THE END :)
    }  
    if(a!=0){
        if(b*b-4*a*c > 0){
            printf("2 \n");
            x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
                if(x1 != 0)
                    printf("%lf\n", x1);
            	else
                    printf("0\n");
            if(x2 != 0)
                printf("%lf", x2);
            else
            	printf("0");  
        }
        else
            if(b*b-4*a*c == 0){
                printf("1 \n");
                x1 = -b/(2*a);
                if(x1 != 0)
                    printf("%lf", x1);
                else
                    printf("0");
            }
            else
                if(b*b-4*a*c < 0)
                    printf("0");
    }
    else
        if(b!=0){
            printf("1 \n");
            if(c!=0)
                x1 = -c/b;
            else
            	x1 = 0;
        printf("%lf", x1);
        }
        else
            if(c!=0)
                printf("0");
    return 0;
	
}


int main()
{
    double a,b,c; //a*x*x + b*x + c = 0
    scanf("%lf %lf %lf", &a, &b, &c);
    equation(a,b,c);

}
