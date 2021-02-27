//Enter your dob and calculate how many days you lived :

#include <iostream>
using namespace std;

int main()
{
  int d1, m1, y1, d2, m2, y2, d, m, y, t;

   cout<<"Enter the born date: "<<endl;
   cin>>d1;
   cout<<"Enter the born month: "<<endl;
   cin>>m1;
   cout<<"Enter the born year: "<<endl;
   cin>>y1;

   cout<<"Enter the present month: "<<endl;
   cin>>d2;
   cout<<"Enter the present month: "<<endl;
   cin>>m2;
   cout<<"Enter the present month: "<<endl;
   cin>>y2;
   
  y = y2 - y1;

  if (d1 > d2)
    d = d1 - d2;
  else
    d = d2 - d1;

  if (m1 > m2)
    m = m1 - m2;
  else
    m = m2 - m1;

  t = 365 * y + 30 * m + d;	//consider that each year has 365 days and each month has 30 days

  cout<<"Total number of days i lived :"<<t;
}
