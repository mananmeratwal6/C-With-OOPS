#include<iostream>
using namespace std;
class A {
public:
virtual void fun()
{ cout<<"\n A::fun() called ";}
};
class B: public A {
public:
void fun()
{ cout<<"\n B::fun() called "; }
};
class C: public B {
public:
void fun()
{ cout<<"\n C::fun() called "; }
};
int main() {
C c; // An object of class C
B *b = &c;
b->fun();
return 0;
} 
