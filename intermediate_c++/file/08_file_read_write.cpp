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
#include <iomanip>
using namespace std;
//------------------------------------------------------

struct student { 
	char  name[10]; 
	int   id; 
};

int main() 
{
	student a[3] ={ {"Ali ",18} , {"Taha",19} , {"Sara",20} };
    student b[3];
    
	ofstream f1( "x" , ios::binary );
	for( int i = 0 ; i <=2 ; ++i)
        f1.write( (char *)& a[i] , sizeof(student)) ;
	
    f1.close();
    
    
	cout<<"\n output: \n\n";
	
	ifstream f2( "x" , ios::binary );
    for( int i = 0 ; i <=2 ; ++i)
    {
        f2.read( (char*)& b[i] , sizeof(student)) ;
	    cout << b[i].name << setw(5) << b[i].id << endl;    
	}
	f2.close();
		
	return 0;
}
  
