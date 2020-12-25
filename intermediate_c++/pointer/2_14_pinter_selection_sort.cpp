/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: Selection sort 

#include <iostream>
#include<iomanip>
#include<cstdlib> //for srand() and rand()
using namespace std;

void selection_sort(int arr[],int len);

int main()
{
	int i, len = 100000;
	
	int *a;
	
	a = new int [len];

	srand( (unsigned)time(NULL)); // change random numbers in each run (if you comment this line Then the random 										 numbers become the same)
	for( i=0; i < len; ++i) 			
		a[i] = rand()%3000;     // generate a random number between 0-30 
	
	selection_sort(a, len);
	
	cout << "sort arry of numbers: " <<endl;
	for(i=0; i < len; ++i)
		cout << setw(5) << a[i];
	
	delete []a;	
	
	return 0;
}
//----------swap-----------
void swap(int *ap, int *bp)
{	int temp; 
 	temp = *ap;
 	*ap = *bp;
 	*bp = temp;
}

void selection_sort(int *x,int size) // get an array of pointer and size of array
{
	int *p, *m, *end;
	
	end = x + size-1;    // Pointer to the last element of x array
	
	for( ; x < end ; ++x)        
	{
		m = x;
		for(p = x+1; p <= end ; ++p) // search minumum number from "x+1" to "end" in array 
			if(*p < *m)
				m = p;
		swap(x,m);
	}
}

