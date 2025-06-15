#include<iostream>
using namespace std;
class A{
public:
A(){
    cout<<"base class constructer called"<<endl;
}
 ~A(){
    cout<<"base class destructer called"<<endl;
}
};
class B :public A {
    public:
    B(){
        cout<<"derived class construct called"<<endl;
    }
    ~B(){
        cout<<"derived class destructer called"<<endl;
    }



};
int main()
{
    A *p;
    p=new B();
delete p;
    return 0;
}