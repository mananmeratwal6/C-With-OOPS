#include<iostream>
using namespace std;
class C{
    int img;
    int real;
    public:
    C():real(0),img(0){}
    C(int img,int real){
        this->img=img;
        this->real=real;
    }
    C operator+(C obj){
        C t;
        t.real=real+obj.real;
        t.img=img+obj.img;
        return t;
    }
    friend ostream & operator<<(ostream & ,C &);
friend istream & operator>>(istream &,C &);

};

ostream & operator<<(ostream &out,C &obj){
    if(obj.img>=0){
        out<<obj.real<<"+"<<obj.img<<"i"<<endl;
    }
    else{
        out<<obj.real<<obj.img<<"i"<<endl;
    }
    return out;
}
istream & operator>>(istream &in,C &obj){
    cout<<"enter real";
    in>>obj.real;
    cout<<"enter imag";
    in>>obj.img;
    return in;
}
int main()
{ C c1,c2,c3,c4,c5;
cin>>c1>>c2;
c3=c1+c2;
cout<<c3;
    
    return 0;
}