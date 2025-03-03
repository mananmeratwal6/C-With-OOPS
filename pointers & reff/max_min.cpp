#include<iostream>
using namespace std;
int  max_min(int x,int y,int *p1,int *p2){
*p1= x>y?x:y;
*p2=x>y?y:x;
}
int main(){
    int  a, b,m,n;
    cout<<"enter 2 ointeger";
    cin>>a>>b;
max_min(a,b,&m,&n);
cout<<"max is "<<m;
cout<<"min is"<<&n;

    return 0;
}