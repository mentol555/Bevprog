#include "std_lib_facilities.h"

using namespace std;

enum class Month{
jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

class Year{
	static const int min=1800;
	static const int max=2200;
public:
	class Invalid{ };
	Year(int x) :y{x} { if(x<min || x>max) throw Invalid{};}
	int year(){return y;}
private: 
	int y;
};
struct Date{
public: 
	Date(Year y,Month m,int d);
	void add_day(int n);
	Month month() {return m;}
	int day(){return d;}
	Year year(){return y.year();}
private:
	Year y;
	Month m;
	int d;
};

Date::Date(Year yy,Month mm,int dd)
:y{yy}, m{mm}, d{dd}
{
	if((int)m<1 || (int)m>12){cerr<<"hibas honapot adtal meg a lenti datumnal!";cout<<endl;}
	if(d<1 || d>31){cerr<<"hibas napot adtal meg a lenti datumnal!";cout<<endl;}
}

void Date::add_day(int n)
{
	d+=n;
}

void f()
{
Date today{ Year{2019} , Month::mar , 30 };
cout<<today.year()<<"."<<today.month()<<"."<<today.day()<<endl;
}

int main()
{
f();
return 0;
}
