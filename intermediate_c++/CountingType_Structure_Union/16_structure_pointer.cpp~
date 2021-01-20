 //------------------------------------------------------------------------------
//  Exercise of learning c++ course                       
//  Course teacher:  Mr. Shirafkan                         
//  Chapter:         structure 
//  Date:            21/10/2021
//  Copyleft H. E. Derakhshan 2020, All lefts reserved!                                        
//------------------------------------------------------------------------------
//  Course title: pointer to structure
//------------------------------------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------------------------------

struct details 
{
  float   radius;
  double  angle;
};

struct calculate
{
  float    area;
  double   sine;
};

calculate  f(struct details );

int main ()
{
       details d;
       d.radius = 3;
       d.angle  = 0.8;

       calculate y;
       y = f(d);

       cout << " area : " << y.area << "\n";
       cout << " sine : " << y.sine << "\n";
    
  return 0;
}


calculate f(struct details m)
{
     calculate c;
     c.area    = pow(m.radius,2);
     c.sine    = sin(m.angle);
    
     return c;
};

