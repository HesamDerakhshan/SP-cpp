/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: difference between Reference and pointer

#include <iostream>
using namespace std;

int main()
{
	int a = 3;

	int &r = a;
	a = 5;

	cout << r << endl;
	
	int b = 1;
	r = b;
	
	cout << r << endl;
	cout << a << endl;
	
	r++;
	
	cout << a << endl;
	cout << b << endl;
	cout << r << endl;
  return 0;
}

