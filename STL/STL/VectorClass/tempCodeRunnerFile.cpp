#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1(5,-1);
    vector<int>v2={10,20,30,40,50};
    vector<int>v3(v2);
    v1.resize(8);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<"\t";
    }
    cout<<endl;
    cout<<v1.empty()<<endl;
    v1.clear();
    cout<<v1.empty()<<endl;
        return 0;
}