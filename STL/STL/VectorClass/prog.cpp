#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    for(int i=1;i<=5;i++){
v1.push_back(i);
    }
    for(int i=1;i<=5;i++){
        cout<<v1[i]<<"\t";
    }
    cout<<endl;
    cout<<"size:"<<v1.size()<<endl;
    cout<<"capacity:"<<v1.capacity()<<endl;
    v1.resize(6);
    cout<<"size:"<<v1.size()<<endl;
    cout<<"capacity:"<<v1.capacity()<<endl;
    if(v1.empty()==false){
        cout<<"\nVector is empty"<<endl;
    }
    else
    cout<<"Vector is not empty";
    v1.shrink_to_fit();
    cout<<"size:"<<v1.size()<<endl;
    cout<<"capacity:"<<v1.capacity()<<endl;
    for(auto itr=v1.begin();itr!=v1.end();itr++){
        // *itr=55;
        cout<<*itr<<endl;
    }
    for(auto i=v1.end();i!=v1.begin()-1;i--){
        cout<<*i<<endl;
    }
    for(int cnt=0;cnt<v1.size();cnt++){
//cout<<v1[cnt]<<" ";
cout<<v1.at(cnt)<<" ";
}

    return 0;
}