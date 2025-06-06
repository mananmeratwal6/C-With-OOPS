#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v1{{1,22,2},{2,3,4},{4,5,6}};
    cout<<v1.capacity();    
    // v1.push_back(0);
    // v1.shrink_to_fit();
    cout<<v1.size();
    // v1.assign(3,-3);
    auto itr=v1.begin();
    advance(itr,2);
    // v1.insert(itr,25);
for(int i=0;i<v1.size();i++){
    for(int j=0;j<v1.size();j++)
    {
        cout<<v1[i][j];
    }
    cout<<endl;
}

    return 0;
}