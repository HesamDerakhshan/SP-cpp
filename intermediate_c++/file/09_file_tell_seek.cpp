//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          File
//  Date:             Jan 22 2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: position of read and write pointer
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <fstream>
#include <iomanip>
using namespace std;
//------------------------------------------------------
/*
file pointer :

get pointer: pointer that save current position of read pointer   
put pointer: pointer that save current position of write pointer 


tellq ( )      // return get pointer position
tellp ( )      // return put pointer position

seekq ( len , origin )    // change get pointer position (len is length of move, Beginning of moving from origin )
seekp ( len , origin )    // change put pointer position

origin:
       ios::cur    // origin of moving from current poition
	   ios::beg    // origin of moving from begginning of file
	   ios::end    // origin of moving from end of file
*/

int main () 
{
   int  a[3]={5,7,8};
   ofstream f1( "x" , ios::binary );
   f1.write( (char *)a, sizeof(a)) ;
   f1.close();

    long  start,end ,size;
    ifstream f2 ("x", ios::binary);
    start = f2.tellg();     // start =0 
    cout<<start<<endl;
    
	f2.seekg (0, ios::end);
    end = f2.tellg();       //end =12
    cout<<end<<endl;
	f2.close();
 
    size = end - start;
    cout << "size= "<< size ;

		
	return 0;
}
  
