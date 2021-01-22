//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: size of file
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
#include <iomanip>
using namespace std;
//------------------------------------------------------

int main () 
{
	int  a[4]={5,7,8,1};
	
	// write file
    ofstream f1( "x" , ios::binary );
    f1.write( (char *)a, sizeof(a)) ;
    f1.close();
   
    // read file from end(ios::ate = get pointer position from end by default)
	ifstream f2 ("x", ios::binary|ios::ate);
    cout<< f2.tellg();  // 16
    
    f2.close();

		
	return 0;
}
  
