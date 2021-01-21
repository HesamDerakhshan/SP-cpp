//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          Structure 
//  Date:             21/10/2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: union(like stract but union can hold only one of its non-static data members at a time.)
//  The union is only as big as necessary to hold its largest data member.
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------

union  a {
  unsigned int  x;      // occupies 4 bytes  
  unsigned int  y[2];   // occupies 8 bytes
  unsigned int  z;      // occupies 4 bytes  
}; // the whole union occupies 8 bytes equal to largest

//   y[1]  y[0]
//          x

int main()
{
  union a  u;
  cout<<sizeof(u)<<endl;   // 8
  
  u.y[0]=9;
  u.y[1]=2;
  
  cout<<u.x<<endl;       //  9
  
  u.x= 5;
  cout<<u.y[0]<<endl;   //5
  cout<<u.y[1];         //2
	 return 0;
}
  
