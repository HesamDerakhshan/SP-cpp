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
	char    s[10];
	float   x;

	ofstream  f1("a");

	if(!f1)  exit(0);

	cout<<"enter:\n";

	while(cin >> s >> x)
	 f1 << s <<' '<< x <<' ';

	f1.close();


	cout<<"\n output: \n";

	ifstream   f2("a");

	f2 >> s >> x;

	while(! f2.eof() )
	{
	 cout << s <<"  "<< x <<endl;
	 f2 >> s >> x;
	}

	f2.close();
	
	return 0;
}
  
