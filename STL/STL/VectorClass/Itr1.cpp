#include<iostream>
#include<vector>
using namespace std;

int main()
{vector<int>v1={10,20,30,40,50};
for(auto itr=v1.begin();itr!=v1.end();itr++){
    (*itr)++;
    cout<<*itr<<"\t";
}
cout<<endl;
    
    return 0;
}