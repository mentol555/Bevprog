#include "std_lib_facilities.h"

using namespace std;

struct Date{
int y,m,d;
public:
Date(int y,int m,int d);
void add_day(int n);
int month(){return m;}
int year(){return y;}
int day(){return d;}
};

Date::Date(int yy,int mm,int dd)
:y{yy}, m{mm}, d{dd}
{
	if(m<1 || m>12){cerr<<"hibas honapot adtal meg a lenti datumnal!";cout<<endl;}
	if(d<1 || d>31){cerr<<"hibas napot adtal meg a lenti datumnal!";cout<<endl;}
}

void Date::add_day(int n)
{
	d+=n;
}

void f()
{
Date today {2019,11,10};
cout<<"Mai datum "<<today.y<<"."<<today.m<<"."<<today.d<<endl;
Date tomorrow {2019,11,10};
today.add_day(1);
cout<<"Holnapi datum "<<today.y<<"."<<today.m<<"."<<today.d<<endl;
}

int main()
{
f();
return 0;
}
