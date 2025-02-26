#include<iostream>
using namespace std;
class B{
    int y;
    public:
    B():y(0){}
    B(int y):y(y){}
   int getdata(){
      return y;
    }
    void display(){
        cout<<y;
    }
};
class A{
    int x;
    public:
    A():x(0){}
    A(int x):x(x){}
    A(B obj){
     x=obj.getdata();
    }
    void display(){
        cout<<x;
    }
};

int main()
{A a;
B  b(5);
a=(A)b; 
    a.display();
    b.display();
    return 0;
}