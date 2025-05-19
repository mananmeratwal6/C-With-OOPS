#include<iostream>
using namespace std;
class polygon{
    protected:
    int l;
    int h;
    public:
    polygon(){
        l=h=0;
    }
    void getdata(){
        cout<<"enter l and h";
        cin >>l>>h;
    }
    void showdata(){
        cout<<l<<h;
    }
};
class rect:public polygon{
    public:
    void area(){
        int t=l*h;
          cout<<t;
    }
};
class tri:public polygon{
    public:
    void area(){
        int t=(l*h)/2;
          cout<<t;
    }
     
    
};
int main()
{
    class rect r;
    r.getdata();
r.area();
class tri t;
t.getdata();
t.area();
    return 0;
}