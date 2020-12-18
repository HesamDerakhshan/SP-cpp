#include <iostream>
using namespace std;
int main()
{    // pointer and array
	// 
	int x[]= {15,13,31,32,11,55};	
	int *p1,*p2;
	
	p1 = x;  // p = x = &x[0]; no p = &x;
	p2 = x+3; // p = &x[3]
	
	x[1]= 8;  // = *(x+1)=8
	*p2 = 5;  // = x[3]=5 or *(x+3)=5
	
	for (int i=0; i<=5;i++){	 
		cout << x[i]<<endl;
	}
	
	cout << "------------------" <<endl;
	
	for (int i=1; i<=4;i++){	 
		cout << *p2 <<endl;
		p2--;
	}


return 0;
}

