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
class C:public B{
    int z;
    public:
   void setdata(int x1,int y1,int z1){
    
    B::setdata(x1,y1);
    z=z1;
   }
   void getdata(){
    B::getdata();
    cout<<"enter the value of z";
    cin >>z;
   }
   void display(){
    B::display();
    cout<<"the value of z is"<<z<<endl;
   }

   
};
int main()
{C b1;
b1.setdata(2,4,5);
b1.display();
b1.getdata();
b1.display();
    
    return 0;
}