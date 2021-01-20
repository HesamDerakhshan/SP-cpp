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


sstruct s {
  int y;
  int x;
}a[5];

int main()
{
  cout<<boolalpha;
  
  cout << (&a[0]   == a)      << '\n';    // true
  
  cout << (&a[0]   < &a[2])   << '\n';    // true
    
  cout << (&a[5]  > &a[4])   << '\n';     // true
  
  cout << (&a[0].x < &a[0].y) << '\n';    // false
 
    
	return 0;
}






