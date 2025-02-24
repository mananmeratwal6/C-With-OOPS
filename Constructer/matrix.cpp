#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A():x(0){}
    A(int):x(x){}
    void sum(B);

};
class B{
    int y;
    public:
    B():y(0){}
    B(int):y(y){}
    friend void A::sum(B );

};
void A::sum(B b1){
    x+b1.y;
}
int main()
{
    A a1(2);
    B b1(4);
    a1.sum(b1);
    return 0;
}