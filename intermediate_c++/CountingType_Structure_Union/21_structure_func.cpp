//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          Structure 
//  Date:             21/10/2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: function inside structure( usually in this situation using class an and object )
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------

struct  s {
	double  a;
 	void    f(int x)   { a=x; }
 	int     g(void)    { int y;   y=a*a;  return (y); }
 } m;


int main( )
{
 m.f(4);             // a=4
 cout << m.g( );     // 16
	 return 0;
}
  
