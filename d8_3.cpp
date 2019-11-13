#include "std_lib_facilities.h"
#include <iostream>


namespace X
{
int var;
void print()
{cout<<var<<endl;}
}
namespace Y
{
int var;
void print()
{cout<<var<<endl;}
}
namespace Z
{
int var;
void print()
{cout<<var<<endl;}
}

int main()
{
X::var=7;
X::print();//x valtozoja
using namespace Y;
var=9;
print();//y valtozoja
{
	using Z::var;
	using Z::print;
	var=11;
	print();//z valtozoja
}
print();//y valtozoja
X::print();//x valtozoja
return 0;
}


