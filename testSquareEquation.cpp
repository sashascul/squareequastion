#include "square_equation.h"

void test() 
{   

    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    int checking = 1, fail = 0, roots = 0;

    FILE* fp;
    fp = fopen("test.txt", "r");
    
    fscanf(fp, "%lf %lf %lf %d %lf %lf", &a, &b, &c, &roots, &x1, &x2);
        
    if (roots == 0) {
		if (a != 0 || b != 0 || c != 0) {
			fail++;
			printf("Lose test %d\n", fail);
			}
        }
        
    if (roots == 1) {
        
		if (b * b - 4 * a * c != 0 || a != 0) {
			fail++;
			printf("Lose test %d\n", fail);
		}

    }

    if (roots == MANYROOTS) {
		
		if (b * b - 4 * a * c >= 0) {
			fail++;
			printf("Lose test %d\n", fail);
		}
		
	}

    if (fail == 0) {
        printf("Accepted!!!\n");
        
    }
    else
    {
        printf("Finally lose tests: \n", fail);
    }
    
    fclose(fp);
}

int main () {
}
