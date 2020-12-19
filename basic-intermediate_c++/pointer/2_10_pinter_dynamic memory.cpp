#include <iostream>
using namespace std;

//dynamic memory   new, delete


int main()
{	int *a;
	int *b;
	
	a = new int(5);
	cout<< *a <<endl;
		
	b = new int[2];
	b[0] = 5;
	b[1] = 3;
	cout<< b[0]+b[1] <<endl;
	
	delete a;
	delete []b;  //note delete []b;

	return 0;
}
   
