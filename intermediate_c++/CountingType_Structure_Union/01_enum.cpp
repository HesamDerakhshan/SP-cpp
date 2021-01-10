/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: enum                                           ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 01/10/2021                                        ***/
/****************************************************************/


// Course title: enum

#include <iostream>
//#include <curses.h>

using namespace std;
/* example
enum color {RED , GREEN , BLUE , BLACK , ORANGE};

enum Time {SECOND , MINUTE , HOUR};

enum Date {DAY , MONTH , YEAR};

enum Gender {MALE , FEMALE , OTHER};

enum Sign {neg = -1 , zero = 0 , pos = 1 };
*/

int main()
{	
	enum Day {Sat , Sun , Mon , Tues , Wednes , Thurs , Fri}; 	
	
	cout << Sat <<endl;             // 0
	cout << Tues + Mon <<endl;      // 3 + 2 = 5    
	cout << Fri - Sat <<endl;       // 6 - 0 = 6 
	cout << Wednes / Mon <<endl;    // 4 / 2 = 2
	
	return 0;
}

