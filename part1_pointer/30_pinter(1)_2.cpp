#include <iostream>
using namespace std;
int main()
{
	int A = 19;
	int B = 26;
	int* pointerA = &A;  
	int* pointerB = &B;
	
	cout << "pointerA: " << pointerA <<endl;
	cout << "*pointerA: " << *pointerA <<endl;
	cout << "B: " << B <<endl;   
	cout << "pointerB: " << pointerB <<endl;
	cout << "*pointerB: " << *pointerB <<endl;
	
	pointerA = pointerB;
	
	cout << "pointerA: " << pointerA <<endl;
	cout << "*pointerA: " << *pointerA <<endl;
	cout << "B: " << B <<endl;   
	cout << "pointerB: " << pointerB <<endl;
	cout << "*pointerB: " << *pointerB <<endl;
	

return 0;
}

