//------------------------------------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//------------------------------------------------------------------------------
//  Course title: array of  structure
//------------------------------------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <string.h>
using namespace std;
//------------------------------------------------------------------------------

const int SIZE = 2;

struct book{
   
   int   book_serial;
   float   cost;
};
int main()
{	
	int i;
	book a[SIZE];                 // array of structure

    
    for(i = 0; i < SIZE; i++){
		cout <<endl;
		cout <<"Enter book serial: " ;
		cin >> a[i].book_serial;
	
		cout<<"Enter cost: ";
		cin >> a[i].cost;
		}
		
	for(int k=0; k<SIZE; k++){
   		cout << "Book Serial: "<<a[k].book_serial <<"  ";
		cout << "Book cost: "<<a[k].cost <<"  ";
		cout << endl << endl;
	}
	return 0;
}






