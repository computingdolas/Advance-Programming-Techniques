#include <iostream>
#include "Matrix.h"
using namespace std;

int main()

{
	//bool result;
	Matrix<double> m1(3,3,0.5);
	Matrix<double> m2(3,3,1);
	//Matrix m3(3,3,1);
	m1 *=m2;
	m1.display();
	
	return 0;
	
}

	
	
	
	
	
	
	
