#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int *a,n,max,i=0;
    cout<<"enter how many element in array";
    cin>>n;
    a=new int[n];
    for(i=0;i<n;i++){
    cout<<"enter elemnt "<<i+1;
    cin>>a[i];
}
 int  *ans=find(a,a+n,4);
  
   if(ans==a+n)
    cout<<"found at not postion ";
    else
    cout<<"found at"<<ans-a+1;
    delete []a;
    return 0;
}