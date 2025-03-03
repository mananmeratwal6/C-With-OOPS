#include<iostream>
using namespace std;
void square(int x,int y,int z,int &p1,int &p2,int &p3){
p1=x*x;
p2=y*y;
p3=z*z;

}
int main(){
    int a,b,c,s,q,r;
    cout<<"enter 3 integers";
    cin>>a>>b>>c;
  square(a,b,c,s,q,r);
  cout<<s<<q<<r;
    return 0;
}