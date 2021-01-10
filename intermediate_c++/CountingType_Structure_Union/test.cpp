/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 01/10/2021                                        ***/
/****************************************************************/


// Course title: structure

#include <iostream>
//#include <curses.h>

using namespace std;

typedef  enum { Zero, One, Two, Three, Four } a;
a x;  // a is a enum type varible

void  f( a ); //input of func is enum

a     g() ;  //output of func is enum

int main()
{	
	f(Two);
	cout << g();	

	return 0;
}

void f(a v)
{
	x = v;
}

a g() 
{
	return x;
}

