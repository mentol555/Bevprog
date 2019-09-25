#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    cout<<"\nb=";cin>>b;
    a=a-b;
    b=b+a;
    a=b-a;
    cout<<"\na="<<a<<" b="<<b;
    return 0;
}
