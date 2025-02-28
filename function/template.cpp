#include<iostream>
using namespace std;
template<typename T >
T sum(T x,T y){
T z;
z=x+y;
return z;
}
int main (){
  
    cout<<sum(2,3)<<endl;
        cout<<sum(2.3,3.3)<<endl;
            cout<<sum('a','b')<<endl;
    return 0;

}
