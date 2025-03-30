#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
 void getdata(){
    cout<<"enter x"<<endl;
    cin>>x;
 }
friend int sum(A ,B );
};
class B{
    int y;
    public:
    void getdata(){
        cout<<"enter y "<<endl;
        cin>>y;
    }
    friend int sum(A ,B );
};
int sum(A a1,B b1){
    int t;
    t=a1.x+b1.y;
    return t;
}
int main()
{
    A a1;
    a1.getdata();
    B b1;
    b1.getdata();
cout<<sum(a1,b1);

   

    return 0;
}