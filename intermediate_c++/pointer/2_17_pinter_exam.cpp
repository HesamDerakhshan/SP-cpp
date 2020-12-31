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

	float  **student;
	int    *exam;

	int n_student, count_stu;
	cout<<"enter number student:";
	cin >> n_student;

	student = new  float *[n_student];
	exam    = new  int    [n_student];  


	for( count_stu =0 ; count_stu < n_student ; count_stu++ ){
		cout << "\n\n\n enter number exam for student"<< count_stu+1 <<":";
		cin  >> exam[count_stu];
    	
		student[count_stu] = new  float[exam[count_stu]];
    	
		int sum=0;
		for( int count_exam=0 ; count_exam < exam[count_stu] ; count_exam++){
    	    cout << " nomreh " << counter_exam+1 << ":";
			cin  >> student[count_stu][count_exam];
			sum += student[count_stu][count_exam];
		   }
        cout<<"average= "<<(float) sum/ exam[count_stu];
    }
 
    
	for( count_stu=0 ; count_stu < n_student ; count_stu++)
		delete [] student[count_stu];
      
	delete [] student;
    delete [] exam;
  return 0;
}



/*
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
*/
