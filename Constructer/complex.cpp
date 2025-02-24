#include <iostream>
using namespace std;
class complex
{
    int img;
    int real;

public:
    complex()
    {
        img = real = 0;
    }
    void getdata()
    {
        cout << "enter value of real and img no.";
        cin >> real >> img;
    }
    complex operator+( complex c2)
    {
        complex t;
        t.real = this->real+ c2.real;
        t.img = img+ c2.img;
        return t;
    }
    void display(){
        cout<<real<<img;
    }
};
int main()
{
complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3=c1+c2;
c3.display();
    return 0;
}