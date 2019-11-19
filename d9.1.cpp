#include "std_lib_facilities.h"

using namespace std;

struct Date{
	int y;//year
	int m;//month
	int d;//day
};

void init_day(Date &dd,int y,int m,int d)
{
cout<<endl;
if(m<1 || m>12){cerr<<"hibas honapot adtal meg a lenti datumnal!";cout<<endl;}
if(d<1 || d>31){cerr<<"hibas napot adtal meg a lenti datumnal!";cout<<endl;}
dd.y=y;
dd.m=m;
dd.d=d;
}

void add_day(Date &dd,int n)
{
dd.d+=n;
}

void datum()
{
Date datum;
init_day(datum,2004,14,30);
cout<<endl<<datum.y<<"."<<datum.m<<"."<<datum.d<<endl;
}

int main()
{
cout<<endl;
Date today; init_day(today,1978,06,25);
cout<<"Mai datum="<<today.y<<"."<<today.m<<"."<<today.d<<endl;
add_day(today,1);
cout<<"Holnapi datum="<<today.y<<"."<<today.m<<"."<<today.d<<endl;
datum();
return 0;
}
