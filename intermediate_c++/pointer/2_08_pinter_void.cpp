#include <iostream>
using namespace std;
//void pointer cant point to int, double, char ,...... 


int main()
{	int a = 3;
	float d = 2.5;
	void *p; //can point to any type of data
	
	p = &a;
	cout<< *(int *)p <<endl;
	
	p =&d;
	cout<< *(float *)p <<endl;
	

	return 0;
}

