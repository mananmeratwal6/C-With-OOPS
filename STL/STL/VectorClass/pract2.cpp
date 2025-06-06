#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.reserve(50);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    vector<int>v2={10,20,30,40,50,60};
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<"\t";
    }
    cout<<endl;
    cout<<v2.front()<<endl;
    cout<<v2.back()<<endl;
    v2.pop_back();
    cout<<v2.front()<<endl;
    cout<<v2.back()<<endl;
    v2.shrink_to_fit();
    cout<<v2.size()<<endl;
       cout<<v2.capacity()<<endl;

    return 0;
}