#include<iostream>
using namespace std;
class A{
 public:
    int x;
};
class B:public A{
    public:
    int y;
};
int main()
{B b1;
b1.x=9;
cout<<sizeof(b1);
    A a1;
    cout<<sizeof(a1);
    return 0;
}