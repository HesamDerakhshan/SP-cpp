//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: write and read in binary file
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
using namespace std;
//------------------------------------------------------


int main(){
	char  s[10];

	ofstream  f1("a");

	if(!f1)  exit(0);

	cout<<"enter:\n";

	while(cin >> s)   // receives s until you press ctrl + d
	  f1 << s <<' ';  // this takes the s to the f1 file
	 

	f1.close();


	cout<<"\n output: \n";

	ifstream   f2("a");

	f2 >> s;

	while(! f2.eof() )
	{
	 cout << s <<endl;
	 f2 >> s;
	}

	f2.close();
	
	
	return 0;
}
  
