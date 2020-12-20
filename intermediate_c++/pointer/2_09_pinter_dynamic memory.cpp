#include <iostream>
using namespace std;

//dynamic memory   new, delete


int main()
{	int *a;
	int *b;
	int s;
	a = new int;    // new cammand give dynamic memory which a is pointer to that 
	if(!a) exit(1); // this if is about checking "new" cmmand is right work 
	
	b = new int;
	if(!a) exit(2); // this if is about checking "new" cmmand is right work
	
	cout<< "inter 2 number" <<endl;
	cin >> *a;
	cin >> *b; 
	s = *a + *b;
	
	cout<< s <<endl;
	
	delete a;
	delete b;

	return 0;
}
   
