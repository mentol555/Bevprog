#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    //1.
    cout<<"Please enter the name of the person you want to write to(followed by 'enter'):\n";
    string first_name;
    cin>>first_name;
    cout<<"Dear, "<<first_name;
    
    //2.
    cout<<"\nHow are you? I'm fine. I miss you. I can't wait to see you again.\n";
    
    //3.
    cout<<"Please enter the name of a friend(followed by 'enter'):\n";
    string friend_name;
    cin>>friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?\n";
    
    //4.
    char friend_sex=0;
    cout<<"Please enter your friend's sex(Male=m Female=f): \n";cin>>friend_sex;
    if(friend_sex=='m')cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
    else{cout<<"If you see "<<friend_name<<" please ask her to call me.\n";}
    
    //5.
    cout<<"Please enter your age:";
    int age=0;
    cin>>age;
    if(age<0 || age>110)
    simple_error("you're kidding!");
    else{cout<<"\nI hear you just had a birthday and you are "<<age<<" years old.";}
    
    //6.
    if(age<=12)cout<<"\nNext year you will be "<<age+1;

    if(age==17)cout<<"\nNext year you will be able to vote.";

    if(age>=70)cout<<"\nI hope you are enjoying retirement.";
    
    //7.
    cout<<"\nYours sincerely, "<<"\nSzilárd.";
    
    return 0;
}
