#include<iostream>
#include<algorithm>
using namespace std;
template<typename T,int x>
class Arr{
    T A;
    int n;
    public:
   Arr();
   Arr(int);
   void getdata();
   void sort();
   void dispaky();
};
template<typename T,int x>
 Arr<T,x>::Arr(){
        A=new T[x];
        n=x;
    }
  template<typename T,int x>
  Arr<T,x>::Arr(int n){
    this->n=x;
    A=new T[x];
  }
template<typename T,int x>
    void Arr<T,x>::getdata(){
       for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1;
        cin>>A[i];
       }
    }
  template<typename T,int x>
    void Arr<T,x>:: sort(){
        ::sort(A,A+n);
    }
template<typename T,int x>
    void Arr<T,x>::dispaky(){
        for(int i=0;i<n;i++){
            cout<<A[i];
        }
    }
int main()
{
    Arr<int,4> a1(5);
    a1.getdata();
    a1.sort();
    a1.dispaky();
    return 0;
}