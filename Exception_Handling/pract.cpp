#include<iostream>
using namespace std;

int main()
{
    int a ,b,c;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    try{
        if(b==0)
        throw "divide by zero not possible";
        else {
        c=a/b;
        cout<<c;
        }
    }
    catch(const char *p){
cout<<p;
    }
    return 0;
}