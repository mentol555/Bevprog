#include "std_lib_facilities.h"

using namespace std;

int ga[10]={1,2,4,8,16,32,64,128,256,512};
int aa[10];

int fact(int v[],int n)
{
	long fct=1;
	for(int i=1;i<=n;i++)
	{
	fct=fct*i;
	aa[i]=fct;
	cout<<aa[i]<<"("<<i<<"!"<<") ";
	}
}

int f(int v[],int n)
{
	int la[10];
	for(int i=0;i<n;i++)la[i]=ga[i];
	cout<<endl;
	for(int i=0;i<n;i++)cout<<la[i]<<" ";
	cout<<endl;
	int* p = new int[n];
	for(int i=0;i<n;i++)p[i]=la[i];
	cout<<endl;
	for(int i=0;i<n;i++)cout<<p[i]<<" ";
	cout<<endl;
	delete []p;
	
}

int main()
{
	f(ga,10);
	cout<<endl;
	fact(aa,10);
return 0;
}
