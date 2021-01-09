/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 09/01/2021                                        ***/
/****************************************************************/


// Course title: Reference in function  

#include <iostream>
using namespace std;



int main()
{
	int a   = 1;
	int &r1 = a;
	int *p  = &a;
	int &r2 = *p; 
	
	cout <<  a << endl;   // 1
	cout << *p << endl;   // 1 
	cout << r1 << endl;   // 1
	cout << r2 << endl;   // 1
	
	r1= 5;
	
	cout <<  a << endl;   // 5
	cout << *p << endl;   // 5 
	cout << r1 << endl;   // 5
	cout << r2 << endl;   // 5
	
	return 0;
}
