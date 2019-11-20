#include "std_lib_facilities.h"

using namespace std;

void print_array10(ostream &os, int* a)
{
	for(int i=0;i<10;i++)
	os<<a[i]<<" ";
	os<<endl;
}
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
	int* uj = new int[10] {1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	cout<<uj[i]<<" ";
	cout<<endl;
	delete []uj;

	int* a = new int[10] {2,4,6,8,10,12,14,16,18,20};
	print_array10(cout,a);
	delete []a;

	int *tiz = new int[10] {100,101,102,103,104,105,106,107,108,109};
	print_array10(cout,tiz);
	delete []tiz;

	int *tizenegy = new int[11];
	for(int i=0;i<11;i++)
	{tizenegy[i]=100+i;}
	print_array(cout,tizenegy,11);
	cout<<endl;
	delete []tizenegy;
	
	int *b = new int[20];
	for(int i=0;i<20;i++)
	{b[i]=100+i;}
	print_array(cout,b,20);
	delete []b;

	vector <int> v;
	for(int i=0;i<10;i++)v.push_back(100+i);print_vector(cout,v);
	//for(int i=0;i<11;i++)v.push_back(100+i);print_vector(cout,v);
	//for(int i=0;i<20;i++)v.push_back(100+i);print_vector(cout,v);
	//delete []v;
return 0;
}
