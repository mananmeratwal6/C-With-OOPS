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
   
    void dispaly(){
        cout<<x;
    }
     ~A(){

    }
};
class B:public A{
    int y;
    public:
    B():A(){
        y=0;
    }
    B(int x1 ,int y1):A(x1){
        y=y1;
    }
    void dispaly(){
        A::dispaly();
        cout<<y;
    }
     ~B(){

    }
};
int main()
{B b1(3,5);
b1.dispaly();
    
    return 0;
}