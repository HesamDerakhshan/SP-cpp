/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: pointer to pointer

#include <iostream>
using namespace std;

int main()
{
	int nStudent;
	cout << "number of -student = " <<endl;
	cin >> nStudent;
	for(int i=0; i < nStudent; i++){
		int exam;
		cout << "number of exam for student = " <<endl;
		cin >> exam;
		float avrage(exam);
	}
  return 0;
}


float avrage(int n){
	float nomre;
	float sum=0;
	for(int i=0;i<n;i++)
		cout<< "nomre = "<<endl;
		cin>>nomre;
		sum += nomre;
	return sum/n;
}
