#include<iostream>
using namespace std;
template<typename T=int,int x=2>
class Array{
    T *a;
    int n;
    public:
    Array();
    Array(int);
    void getdata();
    void display();
};
template<typename T,int x>
Array<T,x>::Array(){
        a=new T[x];
        n=x;
    }
   template<typename T,int x>
    Array<T,x>::Array(int n){
        a=new T[x];
        this->n=x;
    }
    template<typename T,int x>
    void Array<T,x>::getdata(){
        for (int i = 0; i < n; i++)
        {
        cout<<"enter element "<<i+1;
        cin>>a[i];
    }}
    template<typename T,int x>
    void Array<T,x>::display(){
        for(int i=0;i<n;i++){
cout<<"element is "<<a[i];
        }
    }
int main()
{Array<char,8> a1;
a1.getdata();
a1.display();
    
    return 0;
}