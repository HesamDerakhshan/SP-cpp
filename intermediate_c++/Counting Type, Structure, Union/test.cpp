/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 09/01/2021                                        ***/
/****************************************************************/


// Course title: // a*x*x + b*x + c = 0 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // For the square root sqrt()
using namespace std;

void f( double a, double b, double c);
bool g( double a, double b, double c,double* x1Ptr, double* x2Ptr);


int main()
{	float a =  2.0;
	float b = -2.0;
	float c = -1.5;

	f( a , b , c); //a , b , c
	
	cout<<"\n\n---------------------------------\n\n";
	
	a = 2.0;
	b = 0.0;
	c = 2.0;
	f( a , b  ,  c); //a , b , c
		return 0;
}

void f( double a, double b, double c)
{
	double  x1 = 0.0, x2 = 0.0; 
	if(b >= 0 && c >= 0 )
		cout<<"\n equation:\n\t "<< a <<"*x*x + "<< b <<"*x + "<< c <<" = 0"<<endl;
	else if (b >= 0 && c < 0 )
		cout<<"\n equation:\n\t "<< a <<"*x*x + "<< b <<"*x "<< c <<" = 0"<<endl;
	else if (b < 0 && c >= 0 )
		cout<<"\n equation:\n\t "<< a <<"*x*x "<< b <<"*x + "<< c <<" = 0"<<endl;
	else
		cout<<"\n equation:\n\t "<< a <<"*x*x "<< b <<"*x  "<< c <<" = 0"<<endl;
		
	if( g( a, b, c, &x1, &x2) )
	   cout<<"\n has real solutions:"<<"\n\t x1 = "<<x1<<"\n\t x2 = "<<x2<<endl;
	else
	   cout<<"\n has no real solutions!"<< endl;
}

bool  g( double a, double b, double c,double* x1, double* x2)
// Returns: true, if a solution exists,otherwise false.
{
	bool   f = false;
	double d = b*b - 4*a*c;
	
	if( d >= 0) 
	{
		d = sqrt( d);
		*x1 = (-b + d) / (2*a);
		*x2 = (-b - d) / (2*a);
		f= true;
	}
	return f;
}
