/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 09/01/2021                                        ***/
/****************************************************************/


// Course title: // enum

#include <iostream>

/* example
using namespace std;

enum color {RED , GREEN , BLUE , BLACK , ORANGE}

enum Time {SECOND , MINUTE , HOUR}

enum Date {DAY , MOUNTH , YEAR}

enum Gender {MALE , FEMALE , OTHER}

enum Sign {neg = -1 , zero = 0 , pos = 1 }
*/

int main()
{	
	enum Day {Sat , Sun , Mon , Tues , Wednes , Thurs , Fri} 	
	
	cout<< Sat <<end;
	cout<< Tues + Mon <<end;
	cout<< Fri - Sat <<end;
	cout<< Wednes / Mon <<end;
	
	return 0;
}

