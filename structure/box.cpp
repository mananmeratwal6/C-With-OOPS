#include<iostream>
using namespace std;
struct box{
    int inch;
    int feet;
};
box sum(box b1,box b2)
{
    box t;
    t.feet=b1.feet+b2.feet;
    t.inch=b1.inch+b2.inch;
    if(t.inch>=12){
    t.inch=t.inch-12;
    t.feet++;}
    return t;
}
int main()
{
    box b1,b2,ans;
    cout<<"enter feet and inchrs of box one";
    cin>>b1.feet>>b1.inch;
    cout<<"enter feet and inchrs of box two";
    cin>>b2.feet>>b2.inch;
    ans=sum(b1,b2);
cout<<ans.feet<<ans.inch;
    return 0;
}