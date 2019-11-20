
#include "std_lib_facilities.h"
#include <string>
using namespace std;
vector <double> szamok;
double alakit(double &x,string unit)
{
	if(unit=="m"){x=x*1;szamok.push_back(x);}
	if(unit=="cm"){x=x/100.0; szamok.push_back(x);}
	if(unit=="in"){x=x/39.3701; szamok.push_back(x);}
	if(unit=="ft"){x=(x*12)/39.3701; szamok.push_back(x);}
}
int main()
{
double x,sum=0,mini=10000.0,maxi=-10000.0;
int i=0;
string unit;
cout<<"Hello! Enter double type numbers and their units, if you want to end it enter |"<<endl;
	while(cin>>x)
	{	
		++i;
		cin>>unit;
		if(unit=="m" || unit=="cm" || unit=="in" || unit=="ft")		
		{
		cout<<"entered number:"<<x<<endl;	
		alakit(x,unit);
		sum+=x;
		if(x>maxi)
			{cout<<"Largest number so far:"<<x<<"(in m)"<<endl;maxi=x;}
		if(x<mini)
			{cout<<"Smallest number so far:"<<x<<"(in m)"<<endl;mini=x;}
		x=0;
		}
		else cout<<endl<<"Unknown unit!";
	}
	sort(szamok);
	cout<<endl<<"Number of numbers:"<<i;
	cout<<endl<<"Sum of numbers:"<<sum;
	cout<<endl<<"List of numbers:";
	for(int j=0;j<szamok.size();++j)
	cout<<szamok[j]<<" ";

return 0;
}
