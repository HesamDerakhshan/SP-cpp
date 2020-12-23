#include <iostream>
using namespace std;
//pointers to functions as parameters of another function

int f(int(*)(int,int), int,int); //prototype of function
int sum(int,int); //prototype of function
int product(int,int); //prototype of function


int main()
{   	
	cout<< f(sum,6,2)<<endl;     //8
	
	cout<< f(product,6,2)<<endl;     //12  
	return 0;
}
// Function f in first input arguments catch  the pointer p to a function(like sum) 
// which has two input argument. In secend and tirth input arguments
// catch value of inputs of function(like sum).
int f(int(*p)(int a,int b), int c,int d) 
{
	return (*p)(c,d);
}
//-------sum----------
int sum(int a, int b)
{
	return a+b;
}

//-----product----------
int product(int a,int b)
{
	return a*b;
}

