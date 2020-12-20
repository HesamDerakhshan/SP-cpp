#include <iostream>
using namespace std;
//pointers to functions

int f1(int); //prototype of function
int f2(int); //prototype of function


int main()
{   
	int (*p)(int);   
	p = f1;
	cout<< p(3)<<endl;     //9
	p = f2;
	cout<< p(3)<<endl;     //27  

	return 0;
}
int f1(int a) //inport int export int
{
	return a*a;
}

int f2(int b)
{
	return b*b*b;
}

