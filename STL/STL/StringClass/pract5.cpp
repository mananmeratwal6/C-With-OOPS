#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // int ans =s1.compare(s2);
    // if(ans>0)
    // cout<<" first is greatee";
    // else if(ans<0)
    // cout<<"sec is greater";
    // else 
    // cout<<"both is equal";
    if(s1>s2){
        cout<<"s1 is greater";

    }
    else if(s2>s1)
    cout<<"s2 is greater";
    else
    cout<<"both are equal";
    return 0;
}