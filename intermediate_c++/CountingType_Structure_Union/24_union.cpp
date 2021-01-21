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

struct  a{
   char  *b;
   long   c;
   union  d{
   	  int   e;
   	  char  f;
   }u;
}s;

int main()
{
  s.c=123;
  
  s.u.e=65;
  
  cout<<s.u.e;  // 65 
  cout<<s.u.f;  // A
  
	 return 0;
}
  
