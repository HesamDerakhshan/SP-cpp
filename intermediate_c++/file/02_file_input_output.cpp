//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: open file write read 
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
using namespace std;
//------------------------------------------------------


int main(){
	char ch;
	ofstream f1("file_name.dat");   // Define f1 as output file
	if(!f1)							// Check f1 opened 
		exit(0);
	
	cout <<"enter: \n";
	
	do{
	//cin >> ch>>;                  // Can't get space charecter EXMP: hesamderakhshan1998blue
	cin.get(ch);                    // Can get space charecter EXMP: hesam derakhshan 1998 blue
	f1.put(ch);                     // put everythin from ch to f1 file
	
	}while(ch != '$');
	
	f1.close();         
	
	cout <<"output\n";
	
	ifstream f2("file_name.dat");   // Define f2 as input file
	f2.get(ch);                     // get charecter from f2
	
	while(!f2.eof()){               // eof() Return TRUE if the f2 file is reached to end
	   	cout << ch;     
	   	f2.get(ch);                 // get Next charecter from f2 
	}
	
	f2.close();
	
	return 0;
}
  
