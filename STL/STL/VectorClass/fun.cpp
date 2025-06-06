#include<iostream>
#include<vector>
using namespace std;
vector<int>f1(){
    vector<int>v1={1,2,3};
    return v1;
}
int main()
{
    vector<int >v1=f1();
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"\t";
    }
    return 0;
}