/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: Reference in return function  

#include <iostream>
using namespace std;

void f(int &);

char s[20] = "Hesam Derakhshan.";
char &f(int);

int main()
{
	f(5) = ',';	 // s[5]=','

	cout << s << endl;
		
  return 0;
}

char &f(int i){
	return s[i];
}
