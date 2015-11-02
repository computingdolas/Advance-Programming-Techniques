
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// This is a copy program 
template <typename T>
class Matrix 
{
	private :
	int row;
	int col;
	T *ptr;
	
	
	public:
	
	Matrix(int nrow ,int ncol ,T ini);//Constructor 
	~Matrix();//Destructor
	Matrix(const Matrix &obj);// Copy constructor 
	Matrix& operator = (const Matrix& obj);//Assignment Operator 
 	void display();// Dislplay Function 
 	Matrix& operator+=(const Matrix& obj);
 	Matrix& operator-=(const Matrix& obj);
 	T& operator()=(int r, int c)
 	Matrix operator+(const Matrix& obj) const;
 	Matrix operator-(const Matrix& obj) const;
 	Matrix& operator*=(const Matrix& obj);
 	Matrix operator* (const Matrix& obj);
 	bool operator ==(const Matrix& obj);
 	bool operator !=(const Matrix& obj); 
 	

};
template <typename T>
T& Matrix<T>::operator=(int r, int c,)
{
   return(*(ptr + ))
}

template <typename T>
Matrix<T>::Matrix(int nrow, int ncol ,T ini)
{
	cout<<" constructor created "<<endl;
	
	row= nrow ;
	col= ncol ;
	ptr = new T [row*col];
	for (int i =0;i < row*col ;++i)
		*(ptr+ i)= ini ;
}


template <typename T>
Matrix<T>::~Matrix()
{

	cout<<" Destructor called"<<endl;
	delete [] ptr;
			
}
template <typename T>
Matrix<T>& Matrix<T>:: operator = (const Matrix& obj)
{
	cout<<"The Assignment copy constructor is created"<<endl;
	if (this != &obj)
	{
		row= obj.row;
		col = obj.col;
		for (int i =0;i < row * col; ++i)
			*(ptr+i)= *(obj.ptr + i);
		
	}

	return *this ;
}

template <typename T>
Matrix<T>::Matrix(const Matrix &obj)

{
	cout<<" The copy constructor is created "<<endl;
	row= obj.row ;
	col = obj.col ;
	ptr = new double [row*col];
	for (int j =0;j<row*col ;++j)
		*(ptr+j)= *(obj.ptr +j);
		
}
template <typename T>
Matrix<T>& Matrix<T>::operator+=(const Matrix& obj)
{
	cout<<" Assignment addition operator is called"<<endl;
	row=obj.row;
	col=obj.col;
	for (int i= 0;i <row*col;++i)
	{
		*(ptr +i)+= *(obj.ptr +i) ;
	}
	return(* this);
}

template <typename T>
Matrix<T>& Matrix<T>::operator-=(const Matrix& obj)
{
	cout<<" Assignment subtraction operator is called "<<endl;
	row=obj.row;
	col=obj.col;
	for(int i=0;i<row*col;++i)
	{
		*(ptr +i)-= *(obj.ptr +i);
	}
	return (*this);
}


template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix& obj) const
{
	cout<<" the Assignment binary addition operator is created"<<endl;
	Matrix temp(*this);
	temp+= obj;
	return temp;

}


template <typename T>
Matrix<T> Matrix<T>::operator-(const Matrix& obj) const
{	
	cout<<" the Assignment binary substraction operator is created"<<endl;
	Matrix temp(* this);
	temp-=obj;
	return temp;

}


template <typename T>
Matrix<T>& Matrix<T>::operator*=(const Matrix& obj)
{
	if (this->col == obj.row)
	{	
		cout<<"Assignment Matrix Mult is created"<<endl;
		int j;
		double sum;
		int colu =obj.col;
		cout<<" col"<<colu<<endl;
		Matrix m3(this->row,obj.col,0);
		for (int i=0;i<this->row;++i)
		{
			for ( j=0;j<colu;++j)
			{
			sum =0;	
				for (int k=0;k< obj.row;++k)
				{
					cout<<"i"<<"  "<<"j"<<i<<"  "<<j<<"   "<<k<<endl;
					sum+= ((*(ptr+(k+ i*(obj.row)))) * (*(obj.ptr +(k+j*(obj.row)))));
					cout<< *(ptr+(k+ i*(obj.row)))<<endl;
					cout<< *(obj.ptr + (k+ j*(obj.row)))<<endl;
					cout<<"the sum is "<<sum<<endl;
					cout<<" The iteration number is"<<k<<endl;
				}
				cout<<"the total sum is"<<sum<<endl;
			*(m3.ptr +  i*(obj.col) +j) = sum;	
			}
		}
		(*this) = m3;
		return (*this);
	}
	else
	{
		cout<<" this is invalid matrix multiplication return wrong answers";
		return(*this);
	}
}


template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix& obj)
{
	cout<<" The binary Assignment multiplication operator is initialised "<<endl;
	Matrix temp(*this);
	temp *= obj;
	return temp;
}


template <typename T>
bool Matrix<T>::operator==(const Matrix& obj)
{
	bool var =true ;
	row= obj.row;
	col= obj.col;
	
	if(this->row!=obj.row || this->col!=obj.col)
	{
		var =false;
	}	
	else
	{	
		for(int i =0; i <row* col ;++i)
		{
			if(*(ptr +i) != *(obj.ptr +i))
			{
			var=false;
			break;
			}
			
		}
	}	
	return var;
}

template <typename T>
bool Matrix<T>:: operator !=(const Matrix& obj)
 {
 	
 	if(*this == obj)
 		return false;
 	else
 		return true;	
 } 


template <typename T>
void Matrix<T>::display()
{
	cout<<" the display is called cheacking the program"<<endl;
	
	for (int i=0;i<row * col ;++i)
	{	
		
	cout<<"The elements of"<<i<<"the matrix are "<<*(ptr + i)<<endl;
		
	}
	
}
