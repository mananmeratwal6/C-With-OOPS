#include<iostream>
#include<vector>
using namespace std;

int main()
{vector<int>v1={10,20,30,40,50};
auto itr=v1. begin();
advance(itr,2);
v1.insert(itr,34);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<"\t";
}
cout<<endl;
advance(itr,2);
v1.erase(itr);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<"\t";
}
cout<<endl;
    
    return 0;
}