#include<iostream>
using namespace std;
class A{
    public:
    void f1(){
        cout<<"f1 is called";
    }
};
class B:public A{

};
class C:public A{

};
class D:public B,public C{

};
int main()
{D d1;
d1.B::f1();
    
    return 0;
}