#include<iostream>
using namespace std;
class shape{
    public:
   virtual void calculation()=0;
    
    
};
class circle:public shape{
    int r;
    public:
    circle(int r){
this ->r=r;
    }
    void calculation() {
int t=3.14*r*r;
cout<<"area of circle"<<t<<endl;
    }
};
class Rect:public shape{
    int x;
    int y;
    public:
    Rect(int x,int y){
        this->x=x;
        this->y=y;

    }
    void calculation(){
int t=x*y;
cout<<"area of Rectangle"<<t<<endl;
    }
};
int main()
{class shape *s1;
circle c(2);
s1=&c;
s1->calculation();
Rect r(3,5);
s1=&r;
s1->calculation();
    return 0;
}