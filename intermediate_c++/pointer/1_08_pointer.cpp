#include <iostream>
using namespace std;
int main()
{    // array of pointer to array
	// 
	int x[6] = {15,13,31,32,11,55};
	int y[3] = {2,3,4};	
	int *p[] = {x,y};
	
	cout<< *(p[0])<<endl;     //15
	cout<< *(p[0]+1)<<endl;   //13
    cout<< *(p[0]+2)<<endl;   //31
    	
	cout<< *(p[1])<<endl;     //2
	cout<< *(p[1]+1)<<endl;   //3
    cout<< *(p[1]+2)<<endl;   //4
    
    cout<<"<-------------------------------------->"<<endl;
	cout<< *(*p)<<endl;     //15
	cout<< *(*p+1)<<endl;   //13
    cout<< *(*p+2)<<endl;   //31
    	
	cout<< *(*(p+1))<<endl;     //2
	cout<< *(*(p+1)+1)<<endl;   //3
    cout<< *(*(p+1)+2)<<endl;   //4
    

return 0;
}

