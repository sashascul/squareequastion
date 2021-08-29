///\file
///\brief This (header) file can solve a square equation;

#include <stdio.h>
#include <math.h>
#include <assert.h>


//! This function using for exemination of value, which < EPS; 
//! @param [in] x - This value using to exemination number, which < EPS;
//! @return 1 if fabs(x) < EPS, 0 - if fabs(x) >= EPS.
int cON(double x);

//! This function solves a line equation;
//! @param [in] a - param of square quation;
//! @param [in] b - param of square quation;
//! @param [in] c - param of square quation;
//! @param [in] *pX11 - pointer of square quation;
//! @param [in] *pRoots1 - pointer of square quation;
void line_equation(double a, double b, double c, double *pX11, int *pRoots1);

//! This function solves a square equation;
//! @param [in] a - param of square quation;
//! @param [in] b - param of square quation;
//! @param [in] c - param of square quation;
//! @param [in] *pX1 - pointer of square quation;
//! @param [in] *pX2 - pointer of square quation;
//! @param [in] *pRoots - pointer of square quation;
//! @return number of roots;
int square_equation(double a, double b, double c, double *pX1, double *pX2, int *pRoots);

//! This function substitute results in switch(case);
//! @param [in] roots - number of square equation roots;
//! @param [in] x1 - root of square quation;
//! @param [in] x2 - root of square quation;
void forSwitch(int roots, double x1, double x2);

//! This function checks params a, b, c. If NAN - the end;
//! @param [in] *a - pointer of square quation;
//! @param [in] *b - pointer of square quation;
//! @param [in] *c - pointer of square quation;
void determineNumber(double *a, double *b, double *c);

//! This function is my test on true program;
//! @param [in] a - param of square quation;
//! @param [in] b - param of square quation;
//! @param [in] c - param of square quation;
//! @param [in] True_x1 - 1st true root of square quation;
//! @param [in] True_x2 -  2nd true root square quation;
//! @param [in] True_roots -  number of square equation roots;
int testSquare(double a, double b, double c, double True_x1, double True_x2, int True_roots);

// UNIT TEST;
int unitTest();

