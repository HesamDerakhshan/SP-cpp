 //------------------------------------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            01/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//------------------------------------------------------------------------------
//  Course title: pass structure to function
//------------------------------------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <string.h>
using namespace std;
//------------------------------------------------------------------------------


#define Length 2

struct Employee {
  char  name [50];
  int   id;
} e [Length];


void f (Employee e);

int main ()
{
  char b[50];  //buffer

  for (int i=0; i<Length; i++)
  {
    cout << "Enter name: ";
    cin.getline (e[i].name,50);
    
    cout << "Enter id: ";
    cin.getline (b,50);
    e[i].id = atoi (b);
  }
  
  cout << "\nYou have entered these employees:\n";
  
  for (int n=0; n<Length; n++)
          f (e[n]);
          
  return 0;
}


void  f (Employee  t)
{
  cout << t.name<<endl;
  cout << t.id <<"  " <<endl;
}



