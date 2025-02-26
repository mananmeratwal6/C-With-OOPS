#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A():x(0){}
    A(int x):x(x){}
      void display(){
    cout<<x;
}

};
class B{
    int y;
    public:
    B():y(0){}
    B(int y):y(y){}
     operator int (){
       return B(y);
    }

};




int main()
{A a1;
B b1(4);
a1=(A)b1;
  a1.display();  
    return 0;
}