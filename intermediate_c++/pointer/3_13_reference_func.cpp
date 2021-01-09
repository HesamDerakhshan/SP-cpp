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

int &min(int& , int &);

int main()
{
	int x1 = 6;
	int x2 = 4;

	++min(x1,x2);          // ++x2
	cout << x1 << endl;   // 6
	cout << x2 << endl;   // 5
	
	++min(x1,x2);          // ++x2 
	cout << x1 << endl;   // 6
	cout << x2 << endl;   // 6
	
	min(x1,x2) = 9;        // x1 =9
	cout << x1 << endl;   // 9
	cout << x2 << endl;   // 6
	
	min(x1,x2) += 4;       // x2+=4
	cout << x1 << endl;   // 9
	cout << x2 << endl;   // 10
	return 0;
}
int &min(int& a, int &b){
	return a <= b ? a : b;
}
