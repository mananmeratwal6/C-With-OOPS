#include<iostream>
using namespace std;
class A{
    public:
    virtual void print(){
        cout<<"base class print function \n";
    }
    void invoke(){
        cout<<"base class invoke function\n";
        print();
    }
};
class B:public A{
       public:
    void print(){
        cout<<"derived class print function \n";
    }
    void invoke(){
        cout<<"derived class invoke function\n";
        print();
    }
};
int main()
{
    A *p;
    p= new B();
    p->invoke();
    return 0;
}