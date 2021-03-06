//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          Structure 
//  Date:             21/10/2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: pointer to structure
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------

struct mystruct
{
       int x;
       int y;
};
 
int main()
{
  mystruct s,d;  
  s.x = 2;
  s.y = 6;
  
  memcpy( &d , &s , sizeof(s) ); //copy s to d
  
  cout << d.x << endl;   //2
  cout << d.y << endl;   //6
	 
	 return 0;
}
  

