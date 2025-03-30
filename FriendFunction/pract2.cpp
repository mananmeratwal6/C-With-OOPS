#include<iostream>
using namespace std;
class R{
    int l;
    int w;
    public:
    void getdata(){
        cout<<"enter t and w";
        cin >>l>>w;
    }
   friend void calcrec(R o1);
};
class C{
    int r;
    public:
    void getdata(){
        cout<<"enter r";
        cin >>r;
    }
   friend void circ(C o2);
};
void calcrec(R o1){
    int t;
    t=o1.l*o1.w;
    cout<<t;
}
void circ(C o2){
    int t;
    t=3.14*o2.r;
    cout<<t;
}
int main()
{R r1;
r1.getdata();
calcrec(r1);

    
    return 0;
}