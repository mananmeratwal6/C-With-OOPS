#include<iostream>
using namespace std;
class A{
int x;
public:
A():x(0){}
A(int x):x(x){}
int operator++(int){
    return x++;
}
int operator++(){
    return ++x;
}
void display(){
    cout<<x;
}
};
int main()
{
    A a1(6);
cout<<a1++<<"m";
cout<<++a1;
a1.display();
    
    return 0;
}