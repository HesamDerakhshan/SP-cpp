#include <iostream>
using namespace std;
//Passing arguments through pointers


void f (int *); //prototype of function



int main()
{	int a = 2;
	f(&a);
	cout<< a <<endl;

	return 0;
}

//-------f----------
void f(int *a)
{
	*a += 3;
}

/*________call by refrence (in function unit)_________


void f (int *); //prototype of function

int main()
{	int a = 2;
	f(a);
	cout<< a <<endl;

	return 0;
}

//-------f----------
void f(int &a)
{
	a += 3;
}
*/
