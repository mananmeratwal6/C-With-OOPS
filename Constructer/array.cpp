#include<iostream>
using namespace std;
class Array{
    int *arr;
    int n;
    public:
    Array(){
        arr=new int[10];
        n=10;
    }
    Array(int n){
        arr= new int [n];
        this->n=n;
    }
    void getdata(){
        for (int i = 0; i < n; i++)
        {
           cout<<"enter element "<<i+1;
           cin>>arr[i];
        }
    }
        void display(){
        for (int i = 0; i < n; i++)
        {
            /* code */
        
        
        cout<<"your element is "<<arr[i]<<endl;
        }
    }
};
int main()
{Array a1(5);
a1.getdata();
a1.display();
    
    return 0;
}