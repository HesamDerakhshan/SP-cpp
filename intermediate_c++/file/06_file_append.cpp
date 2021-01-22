//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: append
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
using namespace std;
//------------------------------------------------------


int main(){
	char s[80];
	char ch;   

	ifstream f1("a");
	if (f1)
	{
	  while (f1.get(ch))
		 cout << ch;
	}
	f1.close();



	ofstream  f2("a" , ios::app);
	if (!f2)  return(1);
	cout << "\nEnter : ";
	cin >> s;
	f2 << s << "\n";
	f2.close();

	
	return 0;
}
  
