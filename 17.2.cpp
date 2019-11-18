#include "std_lib_facilities.h"

using namespace std;

void print_array(ostream &os,int* a,int n)
{
	for(int i=0;i<n;i++)
	os<<a[i]<<" ";
	os<<endl;
}

void print_vector(ostream &os, vector<int> v)
{
	for(int i=0;i<v.size();i++)
	os<<v[i]<<" ";
	os<<endl;
}

int main()
{
int* p1 = new int(7);
cout<<&p1<<endl<<*p1<<endl;
delete[] p1;

int* p2= new int[7] {1,2,4,8,16,32,64};
for(int i=0;i<7;i++)
{cout<<&p2[i]<<" "<<p2[i]<<" ";cout<<endl;}

int* p3=p2;
p2=p1;
p2=p3;cout<<&p1<<" "<<*p1<<" "<<&p2<<" "<<*p2<<endl;
delete []p2;

p1= new int[10] {1,2,4,8,16,32,64,128,256,512};
p2= new int[10] {1,2,3,4,5,6,7,8,9,10};
cout<<endl;
for(int i=0;i<10;i++)
{p2[i]=p1[i];}
for(int i=0;i<10;i++)
{cout<<p2[i]<<" ";}
cout<<endl;
vector <int> v1;
vector <int> v2;
for(int i=0;i<10;i++)
{v1.push_back(pow(2,i));}

for(int i=0;i<v1.size();i++)
{v2.push_back(v1[i]);}
cout<<endl;
for(int i=0;i<v2.size();i++)
{cout<<v2[i]<<" ";}


return 0;
}
