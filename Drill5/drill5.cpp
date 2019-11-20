#include "std_lib_facilities.h"
using namespace std;
int main()

try{
//1. 
cout << "Success!\n";//error:Cout->cout

//2. 
cout << "Success!\n";//error: " missing after \n

//3. 
cout << "Success" << "!\n"; // error: " missing and ; missing from the end

//4.
string success="Success!";
cout << success << '\n'; // error:success is a variable, but not declared

//5. 
int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//error:7 is an integer but res is a string

//6. 
vector<int> v(10); v[5] = 7; if (v[5]!=7) cout << "Success!\n";
//error:v(5) instead of v[5]

//7. 
bool cond=true;
if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//error: cond not declared

//8. 
bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//error:c has to be true

//9. 
string s = "ape"; bool c = true; if (c) cout << "Success!\n";
//error:boo instead of bool, and c has to be true

//10. 
string s = "ape"; if (s=="fool") cout << "Success!\n"; else cout<<"Fail!\n";
//error:else missing

//11. 
string s = "ape"; if (s=="fool") cout << "Success!\n"; else cout<<"Fail!\n";
//error: < instead of << ,and else is missing

//12. 
string s = "ape"; if (s=="fool") cout << "Success!\n"; else cout<<"Fail!\n";
//error: < instead of <<,else is missing, and + instead of ==

//13. 
vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
//errror:0 instead of i in for()

//14. 
vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
//error:vector's last element is the NULL

//15. 
string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s;
//error: can't write out a string like that(cout<<s[i];)

//16. 
if (true) cout << "Success!\n"; else cout << "Fail!\n";
//error: then is unwanted there

//17. 
int x = 50; char c = x; if (c==50) cout << "Success!\n";
//error: 2000 is too big for char

//18. 
string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s;
//error: Same as in 15.

//19. 
vector <int>v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
//error: vector's type missing(<int>,<double>...) and vector's last element is NULL

//20. 
int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Succ3ss!\n";
//error: i's value has to be changed, not j's

//21. 
int x = 6; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";
//error: if x=2 d will be 5/0 what is impossible, and between x and 2 wasn't there a - 

//22. 
string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s;
//error: Same as in 18.

//23. 
int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Succ3ss!\n";
//error: j wasn't declared and i's value has to be changed
//24. 
int x = 4; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";
//error: = instead of ==, and missing - between x and 2

//25. 
cout << "Success!\n";
//error: cin instead of cout
}

catch(exception &e){
	cerr<<"error: "<<e.what()<<'\n';
	return 1;
}
catch(...){
	cerr<<"Oops:unknown exception!\n";
	return 2;
}
