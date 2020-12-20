#include <iostream>
using namespace std;
//Passing arguments through pointers


void swap (int *, int *); //prototype of function
void sort (int [], int ); //prototype of function



int main()
{	const int size = 7;
	int a[size] = {8,2,4,6,3,10,8};
	sort(a,size);
	for(int i=0;i<size;i++)
		cout<< a[i] <<endl;
	

	return 0;
}
//-------sort-------------
void sort(int a[] , int n)
{
	int i,j;
	int* p;
	p = a; // pointer to array(first )
	
	for(i=0; i<n; i++)
	{
		for(j=0 ; j<n-1 ; j++)
			if(*(p+j) > *(p+j+1))
				swap((p+j),(p+j+1)); 
	}
}

//----------swap-----------
void swap(int *ap, int *bp)
{	int temp; 
 	temp = *ap;
 	*ap = *bp;
 	*bp = temp;
}
