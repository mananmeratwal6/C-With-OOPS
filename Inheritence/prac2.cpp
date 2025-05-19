#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void setx(int x1){
    x=x1;
    }
    void displayx(){
        cout<<x;
    }
};
class B:public A{
    int y;
    public:
    void setxy(int x1,int y1){
        setx(x1);
        y=y1;
    }
    void displayxy(){
        A::displayx();
        cout<<y;
    }
};



int main()
{class B b1;
b1.setxy(2,3);
// b1.setx(3);
    b1.displayxy();
    return 0;
}