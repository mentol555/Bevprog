
#include <iostream>
#include <string>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;
  double alakit(string unit)
{
    if(unit=="m")
  return 1;
    if(unit=="cm")
  return 0.01;
    if(unit=="in")
  return 0.0254;
    if(unit=="ft")
  return 0.3048;
}
  double val[100];
    int main()
{

  string unit;
  double a,small,large,sum=0;
  int num=1;
  cin>>a;
  cin>>unit;
  small=large=a;
  cout<<a<<" the smallest so far\n";
  cout<<a<<" the largest so far\n";
  sum=sum+a*alakit(unit);
  val[num]=a*alakit(unit);
  while(cin>>a){cin>>unit;cout<<"\nbentvan\n";
  if(unit=="cm" || unit=="m" || unit=="in" || unit=="ft")
  {sum=sum+a*alakit(unit);
  num++;
  val[num]=a*alakit(unit);
  if(a>large)
  {large=a;
  cout<<a<<" the largest so far\n";}
  if(a<small)
  {small=a;
  cout<<a<<" the smallest so far\n";}

  cout<<endl;
  }
  else cout<<"Rejected\n";
  }
  sort(val);
  cout<<sum<<" "<<num<<endl;
  for(int i=1;i<=num;i++)
  cout<<val[i]<<" ";
  }
