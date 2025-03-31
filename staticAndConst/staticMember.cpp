#include<iostream>
using namespace std;
class A{
    public:
    int x;
    static int y; 
};
int A::y;
int main()
{A a1,a2,a3;
a1.x=2;
a2.x=4;
a3.x=5;
A::y=9;
cout<<a1.x<<","<<a1.y<<endl;
cout<<a2.x<<","<<a2.y<<endl;
cout<<a3.x<<","<<a3.y<<endl;
cout<<a1.x<<","<<A::y<<endl;
cout<<a2.x<<","<<A::y<<endl;
cout<<a3.x<<","<<A::y<<endl;
    
    return 0;
}