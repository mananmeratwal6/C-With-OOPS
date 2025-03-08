#include<iostream>
#include<algorithm>
using namespace std;
template< typename T,int x>
class A{
    T *arr ;
    int n;
    public:
   A();
   A(int);
   void getdata();
   void sort();
   void dispaly();
};
template< typename T,int x>
 A<T,x>::A(){
        arr=new T [x];
        n=x;
    }
    template< typename T,int x>
    A<T,x>::A(int n){
    arr= new T [x];
    this->n=x; 
    }
   template< typename T,int x>
void A<T,x>::getdata(){
    for(int i=0;i<n;i++){
cout<<"enter element "<<i+1;
cin>>arr[i];
}
}
template< typename T,int x>
void A<T,x>::sort(){
    ::sort(arr,arr+n);
}
template< typename T,int x>
void A<T,x>::dispaly(){
    for(int i=0;i<n;i++){
    cout<<"element is"<<arr[i];
    }
    cout<<endl;
}
int main()
{
A <int,7>a1(5);
a1.getdata();
a1.sort();
a1.dispaly();
    return 0;
}