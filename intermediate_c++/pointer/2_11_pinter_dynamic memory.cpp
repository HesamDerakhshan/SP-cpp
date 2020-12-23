#include <iostream>
using namespace std;

//dynamic memory   new, delete


int main()
{	int n;
	cout <<"enter n"<<endl;
	cin>>n;
	
	int *a;
	a = new int[5];
	
	cout <<"enter n number "<<endl;
	
	
	for (int i=0; i<n; i++)
		cin>>a[i];
		
	int s=0;	
	for (int j=0; j<n; j++)
		s += a[j];
	cout<<s<<endl;
	delete []a;  //note delete []a;

	return 0;
}
   
