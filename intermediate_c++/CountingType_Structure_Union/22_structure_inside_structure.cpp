//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          Structure 
//  Date:             21/10/2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: structure inside structure
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------

struct Name {
  char firstname[80];
  char lastname[80];
  void show() { cout << firstname << " " << lastname << endl; };     
};


struct Date {
  int   day;
  int   month;
  int   year;
  void  show() {cout << month << "/" << day << "/" << year << endl;}  
};

struct Person {
  Name   n;
  Date   b;
  void   show() { cout << endl; n.show(); cout << "Brithday: "; b.show();}
};



int main()
{
  Person h = { { "Hesam", "Derakhshan" } , {1, 4, 1998 }  };

  h.show();
	 return 0;
}
  
