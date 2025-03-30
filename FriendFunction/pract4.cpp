#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A(){
x=0;
    }
    A(int x){
        this->x=x; 
    }
    int  sum(B);

};

class B{
    int y;
    public:
    B(){
y=0;
   }
    B(int y){
        this->y=y; 
    }
    friend int A::sum(B);
};
    int  A::sum(B b1){
        int t;
        t=x+b1.y;
        return t;
    }
int main()
{A a1(3);
B b1(5);
cout<<a1.sum(b1);
    
    return 0;
}