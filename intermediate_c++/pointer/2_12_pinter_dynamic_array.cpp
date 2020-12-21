/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 2                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 21/12/2020                                        ***/
/****************************************************************/


// Course title: Dynamic array  

#include <iostream>
using namespace std;

int main()
{	int x;
	int *a = NULL;
	int *p;
	int array_size = 0, count_input = 0, i;
	
	cout <<"enter number"<<endl;
	
	while(cin >> x)                       // If x is a character, the loop is done.
	{	
		if (count_input >= array_size) 	  // Increase the size of array when array_size is less than count_input
		{
			p =new int[array_size+3];     // New array 3 block bigger than previous small array
			
			for(i=0; i < array_size; ++i) // Pour the value of small array in bigger array
				p[i] = a[i];	       
			delete []a;                   // Delete previous small array
			
			a = p;
			array_size +=3;
		}
		a[count_input++] = x;
	}
	
	if(count_input == 0)
		cout << "No invalid input "<< endl;
	else
	{
	int sum = 0;
	float avrage;
	for (unsigned int i = 0; i < count_input; i++)
		sum += a[i];
		avrage = (float)sum/count_input;
		cout << avrage << endl;
	
	}
	delete []a;
	
	return 0;
}
   
