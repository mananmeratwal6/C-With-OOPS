#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r,c;
    cout<<"r and c"<<endl;
    cin>>r>>c;
    vector<vector<int>>v1(r,vector<int>(c,-1));
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<v1[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}