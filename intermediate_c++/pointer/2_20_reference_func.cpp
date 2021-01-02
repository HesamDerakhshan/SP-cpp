/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: Reference in function 

#include <iostream>
using namespace std;

void f(int &);

int main()
{
	int a = 3;

	f(a);	

	cout << a << endl; // 4
		
  return 0;
}

void f(int &r){
	r++;
}
