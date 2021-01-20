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




int main()
{	
	struct  Student{
   
   int   id, score;
	};
	
	struct Student x[3] = {{1,20},{2,15},{3,14}};                 // array of structure
	
	struct Student *p;
	
	p = x + 2;
    
    cout << "output: "<< p->score;
    
	return 0;
}






