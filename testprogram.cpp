#include <iostream>
#include "Matrix.h"
using namespace std;

int main()

{
	
	//bool result;
	Matrix<double> m1(3,3,1);
	Matrix<double> m2(3,3,0.5);
	Matrix <double> m3(3,3,0);
	cout<<m1<<endl;
	cout<<m2<<endl;
	m3.display();
	int a= m1(0,0);
	
	m1= m1* m2;

	//cout << a <<endl;	
	m1.display();
	
	
	return 0;
	
}

	
	
	
	
	
	
	
