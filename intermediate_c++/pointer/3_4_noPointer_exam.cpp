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

void avrage(int);
int main()
{
	int nStudent;
	cout<<"enter number student:";
	cin >> nStudent;
	for(int i=0; i < nStudent; i++){
		int exam;
		cout << "\n\n\n enter number exam for student"<< i+1 <<":";
		cin >> exam;
		avrage(exam);
	}
  return 0;
}


void avrage(int n){
	float nomre;
	float sum=0;
	for(int i=0;i<n;i++){
		cout << " nomreh " << j+1 << ":";
		cin>>nomre;
		sum += nomre;
	}
	cout <<"avrage: " << sum/n;
}
