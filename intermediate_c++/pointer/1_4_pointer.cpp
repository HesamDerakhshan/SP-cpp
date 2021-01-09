#include <iostream>
using namespace std;
int main()
{
	//if we change *px that meanes x chanes.
	int x = 19;
	int* px = &x;
	*px=5;
	  
	cout << "*px: "    << *px<<endl; 
	cout << "x: "    << x; 

return 0;
}

