#include<iostream>
#include<algorithm>
using namespace std;
class Array{
int *a;
int n;
public:
void getdata(){
    cout<<"how many element n array";
    cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++){
    cout<<"enter element "<<i+1;
    cin>>a[i];
    }
   
}
 void sort(){
        ::sort(a,a+n);
    }
    void reverse(){
        ::reverse(a,a+n);
    }
    void display(){
        for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    }
};
int main()
{
    Array a1;
    a1.getdata();
    a1.sort();
    a1.display();
    a1.reverse();
    a1.display();
    return 0;
}