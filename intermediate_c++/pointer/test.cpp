/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 2                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 21/12/2020                                        ***/
/****************************************************************/


// Course title: Insert array into array 

#include <iostream>
#include<iomanip>
#include<cstdlib> //for srand() and rand()
#include<ctime>
//#include<conio.h>

using namespace std;

int main()
{	int i, len1 =3, len2 =2;

	int *a1 =new int[len1];
	int *a2 =new int[len2];		
	
	srand((unsigned)time(NULL)); // define for rand()
	
	for(i=0; i < len1; ++i)   
		a1[i] = rand()%100;	    // generate a random number between 0-100       
	
	cout << "array 1 :"<<endl;
	for (unsigned int i = 0; i < len1; i += 1)
	{
		cout << setw(15)<<endl;	
	}
	
	
	for(i=0; i < len2; ++i)   
		a2[i] = rand()%100;	    // generate a random number between 0-100       

	cout << "array 1 :"<<endl;
	for (unsigned int i = 0; i < len2; i += 1)
	{
		cout << setw(15)<<endl;	
	}

	
	return 0;
}
   
