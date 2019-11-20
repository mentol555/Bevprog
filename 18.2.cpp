#include "std_lib_facilities.h"

using namespace std;
vector<int> gv {1,2,4,8,16,32,64,128,256,512};
vector<int> vv(10);
int f(vector<int> v)
{
	vector<int>lv(10);
	lv=gv;
	cout<<endl;
	for(int i=0;i<10;i++)
	cout<<lv[i]<<" ";
	cout<<endl;
	vector <int> lv2 = gv;
	for(int i=0;i<10;i++)
	cout<<lv2[i]<<" ";
	cout<<endl;
}
void fact(vector<int> v)
{
	long fct=1;
	for(int i=0;i<vv.size();i++)
	{
	fct=fct*(i+1);
	vv[i]=fct;
	cout<<vv[i]<<"("<<i<<"!"<<") ";
	}
}

int main()
{
f(gv);
cout<<endl;
fact(vv);
return 0;
}
