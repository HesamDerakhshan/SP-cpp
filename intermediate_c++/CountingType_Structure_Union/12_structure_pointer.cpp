 //------------------------------------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//------------------------------------------------------------------------------
//  Course title: pointer to structure
//------------------------------------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <string.h>
using namespace std;
//------------------------------------------------------------------------------


struct  Student{
	char name[20];
	float   score;
};
	

int main()
{	

	struct Student list[3];                 // array of structure
	
	struct Student *p;
	
	p = list;
    for(int i =0; p <= list+2 ; p++, i++ ){
    	cout << "Enter: ["<< i <<"]\n";
    	cin>> p->score;
    	cin >> list[i].name;
    }
    cout << "record name score" << "\n";
 	p=list;
    for(; p <= list+2 ; p++ ){
    	cout << p->name << "     "<< p-> score << "\n";

    }
	return 0;
}






