//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: read write record (array struct)
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
using namespace std;
//------------------------------------------------------


int main(){
  
	int len = 5;
	int  array[len]={10,11,12,13,14};  
		                      
	ofstream f1("a.dat", ios::binary);  
		                      
	f1.write( (char *)array , len * sizeof(array) );   // (char *)array = convert array to char pointer.   len * sizeof(array)= 5 * 4 = 20

	f1.close();                

	int  a[len];   
	ifstream f2("a.dat", ios::binary);  

	f2.read( (char *)a, 20 );    // (char *)a = convert a array to char pointer.   len * sizeof(array)= 5 * 4 = 20

	for(int i=0;i<5;i++)
		cout<<a[i] <<"  ";

	return 0;
}
  
