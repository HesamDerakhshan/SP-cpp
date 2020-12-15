#include <iostream>
using namespace std;
//array of pointers to functions

int sum(int,int); //prototype of function
int product(int,int); //prototype of function


int main()
{   
	int (*p[2])(int,int)={sum,product};
	
	cout<< (*p[0])(6,2)<<endl;     //8
	
	cout<< (*p[1])(6,2)<<endl;     //12  

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

