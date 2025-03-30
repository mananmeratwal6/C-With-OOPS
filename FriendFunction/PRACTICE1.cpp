#include<iostream>
using namespace std;
class A{
    public:
    int x;
    static int y;
    void f1(){
x=9;
y=6;
    }
   static void  f2(A obj){
obj.x=3;
y=8;
    }
    void dis(){
        cout<<x<<y;
    }
};
int A::y;
int main()
{A a1,a2;
a1.f1();
a1.f2(a2);
   a1.dis();

    return 0;
}