#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    try{
        if(a==1)
        throw 2;
        try{
            if(b=4)
            throw 3;
        }
        catch(int x){
cout<<"exception is"<<x;
throw 2;
        }
    }
    catch(int y){
        cout<<"exception is not"<<y;
    }
    return 0;
}