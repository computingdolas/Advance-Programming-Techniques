#include <iostream>
#include "Matrix.h"
using namespace std;

int main()

{
	
	//bool result;
	 Matrix<int> m1( 2,2,0 );
 	 Matrix<int> m2( 2,2,0 );
 	 Matrix<int> m3( 2,2,0 );
 	 

   	m1(0,0) = 1;
   	m1(0,1) = 2;
   	m1(1,0) = 3;
   	m1(1,1) = 1;
   	cout<< m1;

   	m2(0,0) = 4;
   	m2(0,1) = 5;
   	m2(1,0) = 2;
   	m2(1,1) = 3;
   	cout << m2;
   	m3 = m1* m2,
   	cout<< m3;

   Matrix<int> sum  ( m1+m2 );
   Matrix<int> prod ( m1*m2 );
   	cout<<sum(0,0);

	//cout << a <<endl;	
	
	
	
	return 0;
	
}

	
	
	
	
	
	
	
