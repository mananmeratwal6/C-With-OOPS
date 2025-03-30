#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A(){
        x=8;
    }
friend int operator+(int,A );
};
int operator+(int y,A o){
    int t;
    t=o.x+y;
    return t;
}

int main()
{
    A a1,a2;
   cout<< 3+a1;
    
   


    
    return 0;
}