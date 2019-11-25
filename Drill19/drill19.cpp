#include "iostream"
#include "std_lib_facilities.h"
using namespace std;
template<typename T> struct S {

public:
  S(T val) {cout<<val<<" "; this->val=val;};


T get();
T get() const;
T set(T x);
T read_val(T& v);
void dik(const T& x);

private: T val;

};
template <typename T> T S<T>::get()
{
  return val;
}

template <typename T> T S<T>::get() const
{
  return val;
}

template <typename T> T S<T>::set(T x)
{
  val=x;
}

template <typename T> read_val(T & v)
{
    cin>>v;
}

template <typename T>
void S<T>::dik(const T& x)
{
  val = x;
}
int main() {
  S<int> ot(5);
  S<char> b('b');
  S<double> c(6.9);
  S<string> e("Dinok");
  cout<<endl;
  //S<vector<int>> f(vector<int> v (5));
  cout<<ot.get()<<" "<<b.get()<<" "<<c.get()<<" "<<e.get();

  cout<<"Int"<<endl;
  int integer;
  read_val(integer);
  ot.dik(integer);
  cout<<ot.get();
  cout<<endl;

  cout<<"char"<<endl;
  char charka;
  read_val(charka);
  b.dik(charka);
  cout<<b.get();
  cout<<endl;

  cout<<"double"<<endl;
  double dupla;
  read_val(dupla);
  c.dik(dupla);
  cout<<c.get();
  cout<<endl;

  cout<<"string"<<endl;
  string stringis;
  read_val(stringis);
  e.dik(stringis);
  cout<<e.get();
  cout<<endl;
  
  return 0;
}
