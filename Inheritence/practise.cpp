#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(){
        x=0;
    }
    A(int x1){
        x=x1;
    }
    ~A(){

    }
    
};
class B :public A{
    int y;
    public:
    B():A(){
        y=0;
    }
    B(int x1,int y1):A(x1){
    y=y1;
    }
};
int main()
{B b1;
    b1.set(2,3);
    
    b1.display();
    
    return 0;
}