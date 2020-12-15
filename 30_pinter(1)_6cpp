#include <iostream>
using namespace std;
int main()
{ 
	//in "int* const px" we just can change *px varible
	//in "const int* px" we just can change px pointer varible
	//in "const int* const px" we cann't change anything
	int x = 19;
	int y = 18;
	int z = 17;
	
//	const int* px = &x;
//	*px=5;      //error
//	px=&y;      //ok
	
//	int* const py = &y;
//	*py=5;      //ok
//	py=&x;      //error
	
	const int* const pyz = &z;
	*pz=5;      //error
	pz=&x;      //error
	  
	cout << "*py: "    << *pz<<endl; 
	cout << "x: "    << z; 

return 0;
}

