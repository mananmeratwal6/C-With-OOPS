#include<iostream>
using namespace std;
class A{
    int x;
    public:
   void setdata1(int x1){
        x=x1;
      
    }
    void displayx()
    {
        cout<<"x is "<<x;
    }
};
class B:public A{
    int y;
    public:
   void setdata2(int y1){
        y=y1;
       
    }
    void displayy()
    {
        cout<<"y is "<<y;
    }
};

int main()
{B b1;
    b1.setdata1(2);
       b1.setdata2(3);
       b1.displayx();
       b1.displayy();
    return 0;
}