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
int   f(int **);

int main()
{
  int  *p;
  int  k=0;
  int  s=0;
  
  k = f(&p);
  
  for(int i=0;i<k;i++)
       s+=p[i];
       
  cout<<"\n\n sum="<< s ;
  
  delete [] p;
  
  return 0;
}

int f(int **a)
{
	int n;
	cout<<"\n\n enter n:";
	cin>>n;
	
	*a=new int [n];

	for(int i=0;i<n;i++)
	{
	  cout<<"\n enter number "<< i+1 <<":";
	  cin>>(*a)[i];
    }

    return n;
}
