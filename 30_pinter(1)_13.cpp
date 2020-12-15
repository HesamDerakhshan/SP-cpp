#include <iostream>
using namespace std;
//pointers to functions

int sum(int,int); //prototype of function
int product(int,int); //prototype of function


int main()
{   
	int (*p)(int,int);
	p = sum;
	cout<< p(6,2)<<endl;     //8
	p = product;
	cout<< p(6,2)<<endl;     //12  

	return 0;
}
int sum(int a, int b)
{
	return a+b;
}

int product(int a,int b)
{
	return a*b;
}

