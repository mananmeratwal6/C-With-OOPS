#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,5>a1={1,3,4,5,6};
    array<int, 5 >a2={10,20,30,40,50};
    // a1.fill(0);
    a1.swap(a2);
   cout<< a1.front()<<endl;
    cout<<a1.back()<<endl;
    cout<<a1.size()<<endl;
    cout<<a1. empty()<<endl;
for(int i=0;i<a1.size();i++){
  cout<<a1[i]<<"\t";
}
cout<<endl;
for(int i=0;i<a1.size();i++){
  cout<<a1.at(2)<<"\t";
}
cout<<endl;
for(int i=0;i<a1.size();i++){
  cout<<a1.operator[](i)<<"\t";
}
cout<<endl;

    return 0;
}