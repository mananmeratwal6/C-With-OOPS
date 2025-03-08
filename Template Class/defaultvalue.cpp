#include<iostream>
#include<algorithm>
using namespace std;
template<typename T=int,int x=7>
class Array{
T *arr ;
int n ;
public:
Array();
Array(int);
void getdata();
void sort();
void showdata();
~Array();
};
template<typename T,int x>
Array<T,x>::Array(){
    arr=new T [x];
    n=x;
}
template<typename T,int x>
void Array<T,x>::getdata(){
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" "<<": ";
        cin>>arr[i];
    }
}
template<typename T,int x>
void Array<T,x>::sort(){
    ::sort(arr,arr+n);
}
template<typename T,int x>
void Array<T,x>::showdata(){
     for(int i=0;i<n;i++){
        cout<<"enter element is "<<arr[i]<<endl;
}
}
template<typename T,int x>

Array<T,x>::~Array(){
    delete []arr;
}
int main(){
Array<>a1;
a1.getdata();
a1.sort();
a1.showdata();
Array<float,3>a2;
a2.getdata();
a2.showdata();
return 0;
}