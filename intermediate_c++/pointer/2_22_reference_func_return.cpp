/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: Reference in function  

#include <iostream>
using namespace std;


int &f(int i);
int a[3] = {1,2,3};

int main()
{
	f(1) = 50;       // a[1]=50

	cout << a[0] << endl;  // 1
	cout << a[1] << endl;  // 50
	cout << a[2] << endl;  // 3
		
  return 0;
}

int &f(int i){
	return a[i];
} 
