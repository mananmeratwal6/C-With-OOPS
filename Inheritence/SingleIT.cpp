#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void setdata(int x1){
        x=x1;
    }
    void getdata(){
        cout<<"enter the value of x";
        cin>>x;;
    }
    void display(){
        cout<<"the value of x is"<<x<<endl;
    }
};
class B:public A{
    int y;
    public:
    void setdata(int x1,int y1){
         A::setdata(x1);
         y=y1;
    }
    void getdata(){
        A::getdata();
        cout<<"enter the value of y";
        cin>>y;
    }
    void display(){
A::display();
cout<<"the of y is"<<y;
    }

};
int main()
{B b1;
b1.setdata(2,4);
b1.display();
b1.getdata();
b1.display();
    
    return 0;
}