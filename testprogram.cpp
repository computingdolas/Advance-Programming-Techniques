#include <iostream>
#include "Matrix.h"
using namespace std;

int main()

{
	
	//bool result;
	Matrix<double> m1(3,3,0.5);
	//Matrix<double> m2(3,3,1);
	//Matrix m3(3,3,1);
	int a= m1(0,0);
	m1(0,0) = 10;
	//cout << a <<endl;	
	cout<<m1;
	
	
	return 0;
	
}

	
	
	
	
	
	
	
