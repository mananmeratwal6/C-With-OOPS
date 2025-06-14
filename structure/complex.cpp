#include<iostream>
using namespace std;
struct complex{
    int real;
    int img;
};
complex sum(complex c1,complex c2){
complex t;
t.real=c1.real+c2.real;
t.img=c1.img+c2.img;
return t;
}
complex operator*(complex c1,complex c2){
    complex t;
    t.real=c1.real*c2.real-c1.img*c2.img;
    t.img=c1.real*c2.img+c2.img*c1.real;
    return t;
}

int main()
{
    complex c1, c2,c3,c4;
    cout<<"enter real and img of  no. 1";
    cin>>c1.real>>c1.img;
      cout<<"enter real and img of  no. 2";
    cin>>c2.real>>c2.img;
c3=sum(c1,c2);
cout<<c3.real<<"+"<<c3.img<<"i";
c4=(c1*c2);
cout<<c4.real<<"+"<<c4.img<<"i";
    return 0;
}