#include<iostream>
using namespace std;
class A{
int x;
public:
A():x(0){}
explicit A(int x):x(x){}//constructor is used as a conversion function
 operator int (){
   return this->x;
 }
};
int main(){
A a1(4);
int n=a1;
cout<<n;
return 0;
}
