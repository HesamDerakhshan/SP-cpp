#include <iostream>
using namespace std;
int main()
{
	int A = 19;
	int* pointerA = &A;  //  The pointer of a variable must be of the same type
	cout << "A: " << A <<endl;   
	cout << "*pointer A: " << *pointerA <<endl;   // *&age = 19
	cout << "pointer A: " << pointerA <<endl;
	cout << "&pointer A: " << &pointerA <<endl;   // adress of ponter
	cout <<sizeof(pointerA)<<endl;  // pointer is 8 bit 
	
	double D = 19.36;
	double* pointerD = &D;  
	cout << "D: " << D <<endl;   
	cout << "pointer D: " << pointerD <<endl;

	
return 0;
}

