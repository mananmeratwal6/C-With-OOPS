#include<iostream>
#include<conio.h>
using namespace std;
class Unary{
    int a;
    int b;
    public:
    Unary(){
        a=b=0;
    }
    Unary(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    friend Unary operator++(Unary &u){
        Unary t;
        t.a=++u.a;
        t.b=++u.b;
        return t;
    }
    friend Unary operator++(Unary &u,int){
        Unary t;
        t.a=u.a++;
        t.b=u.b++;
        return t;
    }
};
int main()
{
    Unary u1(20,30),u2,u3;
    u1.display();
    u2=++u1;
    u3=u1++;
    u2.display();
    u3.display();
    return 0;
}