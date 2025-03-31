#include<iostream>
using namespace std;
class Circle{
    public:
    int r;
    float area;
    static float pi;
    void calcArea(){
        area=r*r*pi;
    }
    void dispaly(){
        cout<<"area is "<<area;
    }
};
float Circle::pi;
int main()
{
    Circle c1,c2;
    c1.r=2;
    c2.r=5;
Circle::pi=3.14;
c1.calcArea();
c2.calcArea();
c1.dispaly();
c2.dispaly();
    
    return 0;
}