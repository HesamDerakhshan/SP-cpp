#include <iostream>
using namespace std;
/*
 11  12  13
 14  15  16
*/
int main()
{    //pointers to 3D-arrays
	
	int x[2][3][4] = {
					{
						{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12}
					},
					{
						{13,14,15,16},
						{17,18,19,20},
						{21,22,23,24}
					}
				  };
	int (*p)[3][4];  //pointers to 3D-arrays must be in this shape
	p=x;
	cout<< *(*(*(p+0)+2)+1)<<endl;     //10
	cout<< x[0][2][1]<<endl;           //10
	cout<< *(*(*(p+0)+0)+1)<<endl;     //2
	cout<< *(*(*(p+1)+1)+3)<<endl;     //20
    	

    

return 0;
}

