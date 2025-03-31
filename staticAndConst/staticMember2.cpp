#include<iostream>
using namespace std;
class Circle{
    public:
    int r;
    float area;
static float pi;
};
float Circle::pi;
int main()
{Circle c1,c2;
c1.r=4;
c2.r=5;
c1.area=0;

c2.area=0;
Circle::pi=3.14;
cout<<c1.pi<<c2.pi;
    
    return 0;
}