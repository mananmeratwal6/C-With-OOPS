#include<iostream>
using namespace std;
class A{
    int x;
    int y;
    public:
    A():x(0),y(0){}
A(int x,int y):x(x),y(y){}
A (const A &r){
this->x=r.x;
this->y=r.y;
}
void display(){
    cout<<x<<y;
}
};
int main()
{ A a1(2,4);
    A a2(a1);
    a1.display();
    a2.display();
    return 0;
}