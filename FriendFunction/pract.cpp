#include<iostream>
using namespace std;
class complex;
class calc{
    public:
int add(complex ,complex );
};
class complex{
    int a;
    int b;
    public:
    void setdata(int x,int y){
a=x;
b=y;
    }
    friend int calc::add(complex o1 ,complex o2);
    void display(){
        cout<<a<<b;
    }
};
    int calc::add(complex o1,complex o2){
   int t;
    t=o1.a+o2.a;
    t=o1.b+o2.b;
return t;
}


int main()
{complex a1,a2,a3;
a1.setdata(2,3);
a2.setdata(4,5);
calc c;
int r=c.add( a1,a2);
cout<<r;
    
    return 0;
}