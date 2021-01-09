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


int &min(int &, int &);


int main()
{
	int x = 3;
	int y = 5;
	
	// function name written in left side when function's return type is reference
	min(x,y) = 8;        // x = 8  
	
	cout << x << endl;   // 8
	cout << y << endl;   // 5
	cout << min(x,y);    // 5
		
  return 0;
}

int &min(int &a , int &b){
	return (a < b) ? a : b;
} 
