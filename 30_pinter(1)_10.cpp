#include <iostream>
using namespace std;
/*
 11  12  13
 14  15  16
*/
int main()
{    //pointers to 2D-arrays
	
	int x[2][3] = {11,12,13,14,15,16};
	int (*p)[3];  //pointers to 2D-arrays must be in this shape
	p=x;
	cout<< *(*p+5)<<endl;     //16
	cout<< *(*p+1)<<endl;   //12
    cout<< *(*(p+1)+2)<<endl;   //16
    	

    

return 0;
}

