
#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
   void f3(B);
    friend class B;
};
class B{
    int y;
    public:
void f1(A);
void f2(A);
    friend class A;
};
    void B::f1(A a1){
        a1.x=5;
        cout<<a1.x<<endl;
    }
     void B::f2(A a1){
        a1.x=5;
        cout<<a1.x<<endl;
    }
     void A::f3(B b1){
        b1.y=6;
        cout<<b1.y<<endl;
    }
int main()
{
    A a11;
    B b11,b12;
    a11.f3(b11);
    return 0;
}