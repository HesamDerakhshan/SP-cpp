#include <iostream>
using namespace std;
int main()
{
	//We only can subtract the two pointer from each other
	int A = 19;
	int* pointerA = &A;
	int B = 15;
	int* pointerB = &B;
	  
	cout << "sum: "    << pointerA+pointerB; // error
	cout << "mineus: " << pointerA-pointerB; // ok
	cout << "mulitpy: "<< pointerA*pointerB; // error
 	cout << "divide: " << pointerA/pointerB; // error


return 0;
}

