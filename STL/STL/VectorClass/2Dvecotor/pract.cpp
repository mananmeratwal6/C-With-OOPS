#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v1={{1,1,1,1,1},{2,2,2,2},{3,3,3,3,3,3,3,}};
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1.size();j++){
            cout<<v1[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}