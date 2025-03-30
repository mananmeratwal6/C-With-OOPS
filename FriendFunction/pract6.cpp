#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A(){
        x=8;
    }
int operator+(int y){
    int t;
    t=x+y;
    return t;
}

};

int main()
{
    A a1,a2;
   cout<< a1+2;
        
    return 0;
}