#include<iostream>
using namespace std;
int maxx(int *a,int n){
   int  m=0;
    for(int i=0;i<n;i++){
        if(a[i]>m)
        m=a[i];
    }
    return m;
}
int main()
{
    int *a,n,max,i=0,ans;
    cout<<"enter how many element in array";
    cin>>n;
    a=new int[n];
    for(i=0;i<n;i++){
    cout<<"enter elemnt "<<i+1;
    cin>>a[i];
}
   ans=maxx(a,n);
    cout<<"max is "<<ans;
    delete []a;
    return 0;
}