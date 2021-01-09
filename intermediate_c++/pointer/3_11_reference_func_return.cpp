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


int &f(int );
int x[2];

int main()
{
	f(1) = 5;   // x[0]=5
	f(2) = 8;   // x[1]=8
	
		
	cout << x[0] << endl;   
	cout << x[1] << endl;   
  return 0;
}

int &f(int n){
	return x[n-1];
} 
