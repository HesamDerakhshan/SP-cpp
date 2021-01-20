 //------------------------------------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//------------------------------------------------------------------------------
//  Course title: pointer to structure
//------------------------------------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <string.h>
using namespace std;
//------------------------------------------------------------------------------


struct a
{
   int    n;
   float  f;
};

int main()
{ 
 a  x;
 a  *p;

 x.n = 5;

 p = &x;

 p->n = 8;

 cout << x.n ;   //8
 
    
	return 0;
}






