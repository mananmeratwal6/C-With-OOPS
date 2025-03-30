#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex():real(0),img(0){}
    Complex(int real,int img):real(real),img(img){}
    Complex operator+(Complex obj ){
        Complex t;
        t.real=real+obj.real;
        t.img=img+obj.img;
        return t;
    }
    friend ostream & operator<<(ostream &,Complex& );
    friend istream & operator>>(istream &,Complex &);
};
ostream & operator<<(ostream &out,Complex &obj){
    if(obj.img>=0)
    out<<obj.real<<"+"<<obj.img<<"i"<<endl;
    else
     out<<obj.real<<obj.img<<"i"<<endl;
     return (out);
}
istream & operator>>(istream &in,Complex &obj){
cout<<"enter real:";
in>>obj.real;
cout<<"enter img:";
cin>>obj.img;
     return in;
}
int main()
{Complex c1,c2,c3;

cin>>c1>>c2;
c3=c1+c2;
cout<<"sum is"<<c3<<endl;
    
    return 0;
}