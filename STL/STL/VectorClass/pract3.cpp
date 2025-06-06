#include<iostream>
#include<vector>
using namespace std;

int main()
{vector<int>v1={10,20,30,40,50};
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<"\t";
}
cout<<endl;
v1.assign(3,-2);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<"\t";
}
    cout<<endl;
    return 0;
}