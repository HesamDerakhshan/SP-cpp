#include <iostream>
using namespace std;
int main()
{
	//An integer can be added or subtracted to X.
	int A = 19;
	int* pointerA = &A;  

	cout << "pointerA: " << pointerA <<endl;

	pointerA=pointerA+2;
	
	cout << "pointerA: " << pointerA <<endl;


return 0;
}

