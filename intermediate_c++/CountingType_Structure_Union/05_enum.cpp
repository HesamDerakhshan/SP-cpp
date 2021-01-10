/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 01/10/2021                                        ***/
/****************************************************************/


// Course title: // enum

#include <iostream>
//#include <curses.h>

using namespace std;



int main()
{	
	// enum x { a , b , c , d , e } v1 , v2;	
	
	typedef enum { a=10 , b , c , d , e } x;	
	x v1,v2;
	
	v1 = a;
	v2 = e;
	cout << v1 <<endl;	for ( int i = v1; i <= v2; i++){
		cout << i <<endl;	

	}	

	return 0;
}

