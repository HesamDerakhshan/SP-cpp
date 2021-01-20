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

struct Student {
	int    id;
 };

void  f (Student  );  // function get structure
void  g (Student *);  // function get pointer to structure
void  h (Student &);  // function get reference of structure

int main(){

	 Student s[8];
	  
	 s[0].id = 1;

	 f( s[0]);                  // function call by value
	 cout << s[0].id << "\n";   // 1  no change value

	 g(&s[0]);                  // function call by pointer
	 cout << s[0].id << "\n";   // 4

	 h( s[0]);                  // function call by reference
	 cout << s[0].id << "\n";   // 7
	 
	 return 0;
}
  
void  f(Student  a) { a.id  += 3;  }

void  g(Student *p) { p->id += 3;  }

void  h(Student &r) { r.id  += 3;  }
