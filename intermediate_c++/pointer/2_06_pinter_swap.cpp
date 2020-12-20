#include <iostream>
using namespace std;
//Passing arguments through pointers


void swap (int *, int *); //prototype of function



int main()
{	int a = 2;
	int b = 3;
	swap(&a,&b);
	cout<<"a "<< a <<endl;
	cout<<"b "<< b <<endl;

	return 0;
}

//-------f----------
void swap(int *ap, int *bp)
{	int temp; 
 	temp = *ap;
 	*ap = *bp;
 	*bp = temp;
}
