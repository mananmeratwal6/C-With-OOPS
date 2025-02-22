#include<iostream>
using namespace std;
int binary(int *a,int n,int item){
   int low=0,high=n-1;
  
  while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==item){
          return mid;}
          else if(item<a[mid]){
            high=mid-1;
          }
          else{
          low=mid+1;}
    }
   return -1;
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
   ans=binary(a,n,4);
   ans==-1;
   if(ans==-1)
    cout<<"found at not postion ";
    else
    cout<<"found at"<<ans+1;
    delete []a;
    return 0;
}