#include "std_lib_facilities.h"
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

    double kiir(vector<double>v)
    {
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    }
    int main()
    {
    double a,b;
    double total=0;
    char op;
    vector<double>v;
    cout<<"Irjon be egy egyszeru kifejezest(a+b)(a*b)(a-b)(a/b)"<<endl;
    cin>>a>>op>>b;

    switch(op)
    {
        case '+':{
        total=a+b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '-':{
        total=a-b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '*':{
        total=a*b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '/':{
        total=a/b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case 'x':return 0;
        default:{
        cout<<"Helytelen muvelet/kifejezest adtal meg!"<<endl;return 0;break;
        }
    }
    while(cin)
    {
        cout<<"Tovabbi muvelet?(+a,-a,*a,/a  x-et beirva vegeter a program!)\n";cin>>op;if(op=='x'){return 0;break;} cin>>b;cout<<endl;
        switch(op)
        {
        case '+':
        {total+=b;;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '-':
        {
        total-=b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '*':
        {
        total*=b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        case '/':
        {
        total/=b;
        cout<<"Eredmeny:"<<total<<endl;v.push_back(total);break;
        }
        default: {cout<<"Helytelen muvelet/kifejezest adtal meg!";
            break;}
        }
        cout<<"Eredmenyek: ";
        kiir(v);
        cout<<endl;
    }
    return 0;
}
