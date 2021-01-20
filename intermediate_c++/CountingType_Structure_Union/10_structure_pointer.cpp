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


struct  Time{
   
   int   h,m,s;
};

int main()
{	
	Time t1,t2;                 // array of structure
	t1.h = 7;
	t1.m = 0;
    t1.s = 0;
    
    t2 = t1;
    
    t2.h++;
    
    cout << "Clock: "<< t2.h <<endl;
    
    Time *p;  // pointer to structure
    p = &t2;
    
    cout << "Clock: "<< p->h <<endl;
    cout << "Clock: "<< (*p).h<<endl;
	return 0;
}






