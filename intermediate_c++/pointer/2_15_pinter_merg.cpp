/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: Merge two arrays 

#include <iostream>
#include<iomanip>
#include<cstdlib> //for srand() and rand()
using namespace std;

void  sort( int arr[], int len);
int   *merge( int v1[], int len1, int v2[], int len2);

int main()
{

	int i, len1 = 4, len2 = 2;
	
	int *a1 ,*a2;
	a1 = new  int[len1],
	a2 = new  int[len2];
	
	srand( (unsigned)time(NULL));
	
	for( i=0; i < len1; ++i) 
		a1[i] = rand()%100+1;  // generate a random number between 1-100 
		
	for( i=0; i < len2; ++i)
		a2[i] = rand()%100+1;  // generate a random number between 1-100
		

	sort( a1, len1); 
	cout << "sort array1: " << endl;
	for( i = 0; i < len1; ++i)
		cout << setw(12) << a1[i];
	cout << endl << endl;

	sort( a2, len2); 
	cout << "sort array2: " << endl;
	for( i = 0; i < len2; ++i)
		cout << setw(12) << a2[i];
	cout << endl << endl;
	
	int *a3, len3;
	
	a3 = merge( a1, len1, a2, len2);
	
	len3 = len1 + len2;
	
	cout << "merged array: " << endl;
	for( i = 0; i < len3; ++i)
		cout << setw(12) << a3[i];
	cout << endl << endl;
	
	delete[] a1; 
	delete[] a2; 
	delete[] a3;
	
	return 0;
}

//--------------------swap-----------------------
inline void swap( int& a, int& b) 
{ 
int temp = a; a = b; b = temp; 
}

// -------------------sort-----------------------
void sort( int *a, int len)
{
	int *p , *m;    
	
	int *end;
	end = a + len-1;   
	
	for( ; a < end; ++a)
	{
		m = a;                        
		for( p = a+1; p <= end ; ++p) 
			if( *p < *m ) 
				m = p;
		swap( *a , *m); 
	}
}

// --------------------merge-----------------------
int *merge( int v1[], int len1, int v2[], int len2)
{
	int k = 0, i = 0, j = 0;
	
	int *a;
	a = new int[len1+len2]; 
	
	for( ; i < len1 && j < len2 ; ++k)
	{
		if( v1[i] <= v2[j])
			a[k] = v1[i++];
		else
			a[k] = v2[j++];
	}
	
	if( i < len1)                 // Copy the rest of v1 or v2.
		while( i < len1)
			a[k++] = v1[i++];
	else
		while( j < len2)
			a[k++] = v2[j++];
			
	return a;
}
