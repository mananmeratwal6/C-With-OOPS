#include<iostream>
using namespace std;
void transpose(int **a,int r,int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
        }
}}
int main()
{
    int **a,r,c;
    cout<<"enetr how many rows and colm";
    cin>>r>>c;
    a=new int*[r];
    for(int i=0;i<r;i++){
        a[i]=new int[c]; 
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element "<<i+1<<j+1;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    transpose(a,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
    cout<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}